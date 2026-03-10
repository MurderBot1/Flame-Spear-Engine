#include "util/files/FolderUtil.h"

namespace FSE::Util::Files::FolderUtil {
#include <expected>
#include <filesystem>

    std::expected<void, FolderCreationError> create_folder(const std::filesystem::path& folder_path) {
        try {
            if (std::filesystem::exists(folder_path) && !std::filesystem::is_directory(folder_path)) {
                return std::unexpected(FolderCreationError::PATH_EXISTS_NOT_DIRECTORY);
            }

            // Creates all missing parent directories automatically
            std::filesystem::create_directories(folder_path);

            return {};
        } catch (const std::filesystem::filesystem_error& e) {
            switch (e.code().value()) {
            case EACCES:
            case EPERM:
                return std::unexpected(FolderCreationError::PERMISSION_DENIED);
            case ENOTDIR:
                return std::unexpected(FolderCreationError::INVALID_PATH);
            case ENOENT:
                return std::unexpected(FolderCreationError::INVALID_PATH);
            default:
                return std::unexpected(FolderCreationError::UNKNOWN_ERROR);
            }
        }
    }

    std::expected<void, FolderDeletionError> delete_folder(const std::filesystem::path& folder_path) {
        try {
            if (!std::filesystem::exists(folder_path)) {
                return std::unexpected(FolderDeletionError::PATH_DOES_NOT_EXIST);
            }

            if (!std::filesystem::is_directory(folder_path)) {
                return std::unexpected(FolderDeletionError::NOT_A_DIRECTORY);
            }

            // remove() returns false if directory is not empty
            if (!std::filesystem::remove(folder_path)) {
                return std::unexpected(FolderDeletionError::DIRECTORY_NOT_EMPTY);
            }

            return {};
        } catch (const std::filesystem::filesystem_error& e) {
            switch (e.code().value()) {
            case EACCES:
            case EPERM:
                return std::unexpected(FolderDeletionError::PERMISSION_DENIED);
            case ENOTDIR:
                return std::unexpected(FolderDeletionError::NOT_A_DIRECTORY);
            case ENOENT:
                return std::unexpected(FolderDeletionError::PATH_DOES_NOT_EXIST);
            default:
                return std::unexpected(FolderDeletionError::UNKNOWN_ERROR);
            }
        }
    }
} // namespace FSE::Util::Files::FolderUtil