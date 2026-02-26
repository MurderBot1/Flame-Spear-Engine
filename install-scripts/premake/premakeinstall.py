import installutil
from pathlib import Path
import os
import subprocess

# Premake version to install
VERSION = "5.0.0-beta8"

# Paths
DOWNLOAD_PATH_WINDOWS : Path = Path("temp/premake.zip")
DOWNLOAD_PATH_LINUX : Path = Path("temp/premake.tar.gz")
DOWNLOAD_PATH_MAC : Path = Path("temp/premake.tar.gz")
EXTRACT_PATH_WINDOWS : Path = Path("temp/ ")
EXTRACT_PATH_LINUX : Path = Path("temp/ ")
EXTRACT_PATH_MAC : Path = Path("temp/ ")
INSTALL_PATH : Path = installutil.ROOT / "FlameSpearEngine_SDKs" / "Premake"

# Download links
DOWNLOAD_LINK_WINDOWS : str = installutil.get_curl_command(f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-windows.zip", DOWNLOAD_PATH_WINDOWS)
DOWNLOAD_LINK_LINUX : str = installutil.get_curl_command(f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-linux.tar.gz", DOWNLOAD_PATH_LINUX)
DOWNLOAD_LINK_MAC : str = installutil.get_curl_command(f"https://github.com/premake/premake-core/releases/download/v{VERSION}/premake-{VERSION}-macosx.tar.gz", DOWNLOAD_PATH_MAC)

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
    return installutil.get_install_commands(WINDOWS_INSTALL_COMMANDS, LINUX_INSTALL_COMMANDS, MAC_INSTALL_COMMANDS)

# Getter for download path
def get_download_path() -> Path:
    return installutil.get_download_path(DOWNLOAD_PATH_WINDOWS, DOWNLOAD_PATH_LINUX, DOWNLOAD_PATH_MAC)

# Run the executable downloaded and other setup items
def install_premake():
    installutil.run_commands(get_install_commands())

# Removes the downloaded executable
def cleanup_install_executable():
    download_path : Path = get_download_path()
    if os.path.exists(download_path):
        os.remove(download_path)
    if installutil.IS_MAC and os.path.exists(EXTRACT_PATH_MAC):
        os.remove(EXTRACT_PATH_MAC)

# Downloads and installs premake
def download_and_install_premake():
    os.makedirs(INSTALL_PATH, exist_ok=True)
    subprocess.run(get_download_command(), shell=True)
    install_premake()
    cleanup_install_executable()

# Main function that is imported and ran to install premake
def main():
    download_and_install_premake()