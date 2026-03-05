import installutil
from pathlib import Path
import os
import subprocess

# ninja version to install
VERSION = "1.13.2"

# Paths
DOWNLOAD_PATH_WINDOWS : Path = Path("temp/ninja.zip")
DOWNLOAD_PATH_LINUX : Path = Path("temp/ninja.zip")
DOWNLOAD_PATH_MAC : Path = Path("temp/ninja.zip")
EXTRACT_PATH_WINDOWS : Path = Path("temp/ninja")
EXTRACT_PATH_LINUX : Path = Path("temp/ninja")
EXTRACT_PATH_MAC : Path = Path("temp/ninja")
INSTALL_PATH : Path = installutil.ROOT / "FlameSpearEngine_SDKs" / "Ninja"

# Download links
DOWNLOAD_LINK_WINDOWS : str = installutil.get_curl_command(f"https://github.com/ninja-build/ninja/releases/download/v{VERSION}/ninja-win.zip", DOWNLOAD_PATH_WINDOWS)
DOWNLOAD_LINK_LINUX : str = installutil.get_curl_command(f"https://github.com/ninja-build/ninja/releases/download/v{VERSION}/ninja-linux.zip", DOWNLOAD_PATH_LINUX)
DOWNLOAD_LINK_MAC : str = installutil.get_curl_command(f"https://github.com/ninja-build/ninja/releases/download/v{VERSION}/ninja-mac.zip", DOWNLOAD_PATH_MAC)

# Commands to install vulkan
WINDOWS_INSTALL_COMMANDS : list[str] = [
    ""
]

LINUX_INSTALL_COMMANDS : list[str] = [
    ""
]

MAC_INSTALL_COMMANDS : list[str] = [
    ""
]

# Getter for download command
def get_download_command() -> str:
    return installutil.get_download_command(DOWNLOAD_LINK_WINDOWS, DOWNLOAD_LINK_LINUX, DOWNLOAD_LINK_MAC)

# Getter for install commands
def get_install_commands() -> list[str]:
    return installutil.get_commands(WINDOWS_INSTALL_COMMANDS, LINUX_INSTALL_COMMANDS, MAC_INSTALL_COMMANDS)

# Getter for download path
def get_download_path() -> Path:
    return installutil.get_path(DOWNLOAD_PATH_WINDOWS, DOWNLOAD_PATH_LINUX, DOWNLOAD_PATH_MAC)

# Getter for extraction path
def get_extract_path() -> Path:
    return installutil.get_path(EXTRACT_PATH_WINDOWS, EXTRACT_PATH_LINUX, EXTRACT_PATH_MAC)

# extract downloaded file
def extract_ninja() -> None:
    installutil.extract(get_download_path(), get_extract_path())

# Run the executable downloaded and other setup items
def install_ninja() -> None:
    installutil.run_commands(get_install_commands())

# Removes the downloaded executable
def cleanup_install_executable() -> None:
    download_path : Path = get_download_path()
    if os.path.exists(download_path):
        os.remove(download_path)
    if installutil.IS_MAC and os.path.exists(EXTRACT_PATH_MAC):
        os.remove(EXTRACT_PATH_MAC)

# Downloads and installs ninja
def download_and_install_ninja() -> None:
    os.makedirs(INSTALL_PATH, exist_ok=True)
    subprocess.run(get_download_command(), shell=True)
    extract_ninja()
    install_ninja()
    cleanup_install_executable()

# Main function that is imported and ran to install ninja
def main() -> None:
    download_and_install_ninja()