import os
import installutil
import subprocess
from pathlib import Path

# Vulkan version to install
VERSION = "1.4.341.0"

# Paths
DOWNLOAD_PATH_WINDOWS : Path = Path("temp/vulkan.exe")
DOWNLOAD_PATH_LINUX : Path = Path("temp/vulkan.tar.xz")
DOWNLOAD_PATH_MAC : Path = Path("temp/vulkan.zip")
EXTRACT_PATH_LINUX : Path = Path("temp/ ")
EXTRACT_PATH_MAC : Path = Path("temp/ ")
INSTALL_PATH : Path = installutil.ROOT / "FlameSpearEngine_SDKs" / "Vulkan"

# Download links
DOWNLOAD_LINK_WINDOWS : str = installutil.get_curl_command(f"https://sdk.lunarg.com/sdk/download/{VERSION}/windows/vulkansdk-windows-X64-{VERSION}.exe", DOWNLOAD_PATH_WINDOWS)
DOWNLOAD_LINK_LINUX : str = installutil.get_curl_command(f"https://sdk.lunarg.com/sdk/download/{VERSION}/linux/vulkansdk-linux-x86_64-{VERSION}.tar.xz", DOWNLOAD_PATH_LINUX)
DOWNLOAD_LINK_MAC : str = installutil.get_curl_command(f"https://sdk.lunarg.com/sdk/download/{VERSION}/mac/vulkansdk-macos-{VERSION}.zip", DOWNLOAD_PATH_MAC)

# Commands to install vulkan
WINDOWS_INSTALL_COMMANDS : list[str] = [
    f"{DOWNLOAD_PATH_WINDOWS} --root {INSTALL_PATH} --accept-licenses --default-answer --confirm-command install",
]

LINUX_INSTALL_COMMANDS : list[str] = [
    "",
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
    return installutil.get_path(Path(), EXTRACT_PATH_LINUX, EXTRACT_PATH_MAC)

# extract downloaded file
def extract_vulkan() -> None:
    if(installutil.IS_WINDOWS):
        return
    installutil.extract(get_download_path(), get_extract_path())

# Run the executable downloaded and other setup items
def install_vulkan() -> None:
    installutil.run_commands(get_install_commands())

# Removes the downloaded executable
def cleanup_install_executable() -> None:
    download_path : Path = get_download_path()
    if os.path.exists(download_path):
        os.remove(download_path)
    if installutil.IS_MAC and os.path.exists(EXTRACT_PATH_MAC):
        os.remove(EXTRACT_PATH_MAC)
    if installutil.IS_LINUX and os.path.exists(EXTRACT_PATH_LINUX):
        os.remove(EXTRACT_PATH_LINUX)

# Downloads the vulkan executable installer and run it
def download_and_install_vulkan() -> None:
    os.makedirs(INSTALL_PATH, exist_ok=True)
    subprocess.run(get_download_command(), shell=True)
    extract_vulkan()
    install_vulkan()
    cleanup_install_executable()

# Main function that is imported and ran to install vulkan
def main() -> None:
    download_and_install_vulkan()