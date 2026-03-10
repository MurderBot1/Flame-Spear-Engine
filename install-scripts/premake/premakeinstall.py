import installutil
from pathlib import Path
import os
import subprocess

# Documentation
# https://github.com/ninja-build/ninja/releases

# Premake version to install
VERSION = "5.0.0-beta8"

# Paths
DOWNLOAD_PATH_WINDOWS: Path = Path("temp/premake.zip")
DOWNLOAD_PATH_LINUX: Path = Path("temp/premake.tar.gz")
DOWNLOAD_PATH_MAC: Path = Path("temp/premake.tar.gz")
EXTRACT_PATH_WINDOWS: Path = Path("temp/premake")
EXTRACT_PATH_LINUX: Path = Path("temp/premake")
EXTRACT_PATH_MAC: Path = Path("temp/premake")
INSTALL_PATH: Path = installutil.ROOT / "FlameSpearEngine_SDKs" / "Premake"

# Download links
DOWNLOAD_LINK_WINDOWS: str = installutil.get_curl_command(
    f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-windows.zip",
    DOWNLOAD_PATH_WINDOWS,
)
DOWNLOAD_LINK_LINUX: str = installutil.get_curl_command(
    f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-linux.tar.gz",
    DOWNLOAD_PATH_LINUX,
)
DOWNLOAD_LINK_MAC: str = installutil.get_curl_command(
    f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-macosx.tar.gz",
    DOWNLOAD_PATH_MAC,
)

# Commands to install vulkan
WINDOWS_INSTALL_COMMANDS: list[str] = [
    f"move /Y {EXTRACT_PATH_WINDOWS / 'premake5.exe'} {INSTALL_PATH / 'premake5.exe'}"
]

LINUX_INSTALL_COMMANDS: list[str] = [
    f"mv {EXTRACT_PATH_LINUX / 'premake5'} {INSTALL_PATH / 'premake5'}"
]

MAC_INSTALL_COMMANDS: list[str] = [
    f"mv {EXTRACT_PATH_MAC / 'premake5'} {INSTALL_PATH / 'premake5'}"
]


# Getter for download command
def get_download_command() -> str:
    return installutil.get_download_command(
        DOWNLOAD_LINK_WINDOWS, DOWNLOAD_LINK_LINUX, DOWNLOAD_LINK_MAC
    )


# Getter for install commands
def get_install_commands() -> list[str]:
    return installutil.get_commands(
        WINDOWS_INSTALL_COMMANDS, LINUX_INSTALL_COMMANDS, MAC_INSTALL_COMMANDS
    )


# Getter for download path
def get_download_path() -> Path:
    return installutil.get_path(
        DOWNLOAD_PATH_WINDOWS, DOWNLOAD_PATH_LINUX, DOWNLOAD_PATH_MAC
    )


# Getter for extraction path
def get_extract_path() -> Path:
    return installutil.get_path(
        EXTRACT_PATH_WINDOWS, EXTRACT_PATH_LINUX, EXTRACT_PATH_MAC
    )


# Downloads the premake executable installer and run it
def download_premake() -> None:
    os.makedirs(INSTALL_PATH, exist_ok=True)
    subprocess.run(get_download_command(), shell=True)


# extract downloaded file
def extract_premake() -> None:
    installutil.extract(get_download_path(), get_extract_path())


# Run the executable downloaded and other setup items
def install_premake() -> None:
    installutil.run_commands(get_install_commands())


# Removes the downloaded executable
def cleanup_install_executable() -> None:
    download_path: Path = get_download_path()
    extract_path: Path = get_extract_path()
    installutil.delete(download_path)
    installutil.delete(extract_path)


# Downloads and installs premake
def download_and_install_premake() -> None:
    download_premake()
    extract_premake()
    install_premake()
    cleanup_install_executable()


# Main function that is imported and ran to install premake
def main() -> None:
    download_and_install_premake()
