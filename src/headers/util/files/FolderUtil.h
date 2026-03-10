#ifndef FolderUtil_H
#define FolderUtil_H

#include <cstdarg>
#include <expected>
#include <filesystem>

namespace FSE::Util::Files::FolderUtil {
    /**
     * @brief
     */
    enum class FolderCreationError {
        PATH_EXISTS_NOT_DIRECTORY,
        PERMISSION_DENIED,
        INVALID_PATH,
        IO_ERROR,
        UNKNOWN_ERROR
    };

    /**
     * @brief Creates the folder at that path
     * @param folder_path The folder path to create
     * @return Returns either a void on success or a FolderCreationError on failure
     */
    std::expected<void, FolderCreationError> create_folder(const std::filesystem::path& folder_path);

    /**
     * @brief
     */
    enum class FolderDeletionError {
        PATH_DOES_NOT_EXIST,
        PERMISSION_DENIED,
        NOT_A_DIRECTORY,
        DIRECTORY_NOT_EMPTY,
        IO_ERROR,
        UNKNOWN_ERROR
    };

    /**
     * @brief Deletes a folder at that path
     * @param folder_path The folder path to delete
     * @return Returns either a void on success or a FolderDeletionError on failure
     */
    std::expected<void, FolderDeletionError> delete_folder(const std::filesystem::path& folder_path);
} // namespace FSE::Util::Files::FolderUtil

#endif