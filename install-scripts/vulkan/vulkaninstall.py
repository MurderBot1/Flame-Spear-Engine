import os
import platform
import sys
import subprocess
from pathlib import Path

# vulkan version to install
VULKAN_VERSION = "1.4.341.0"

# Operating system variables
OS_NAME : str = platform.system()
IS_WINDOWS : bool = OS_NAME == "Windows"
IS_LINUX : bool = OS_NAME == "Linux"
IS_MAC : bool = OS_NAME == "Darwin"

# Paths
ROOT : Path = Path("C:/") if IS_WINDOWS else Path("/")
DOWNLOAD_PATH_WINDOWS : Path = Path("temp/vulkan.exe")
DOWNLOAD_PATH_LINUX : Path = Path("temp/vulkan.tar.xz")
DOWNLOAD_PATH_MAC : Path = Path("temp/vulkan.zip")
EXTRACT_PATH_MAC : Path = Path("temp/ ")
INSTALL_PATH : Path = ROOT / "FlameSpearEngine_SDKs" / "Vulkan"

# Download links
DOWNLOAD_LINK_WINDOWS : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULKAN_VERSION}/windows/vulkansdk-windows-X64-{VULKAN_VERSION}.exe -o {DOWNLOAD_PATH_WINDOWS}"
DOWNLOAD_LINK_LINUX : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULKAN_VERSION}/linux/vulkansdk-linux-x86_64-{VULKAN_VERSION}.tar.xz -o {DOWNLOAD_PATH_LINUX}"
DOWNLOAD_LINK_MAC : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULKAN_VERSION}/mac/vulkansdk-macos-{VULKAN_VERSION}.zip -o {DOWNLOAD_PATH_MAC}"

# Commands to install vulkan
WINDOWS_INSTALL_COMMANDS : list[str] = [
    f"{DOWNLOAD_PATH_WINDOWS} --root {INSTALL_PATH} --accept-licenses --default-answer --confirm-command install",
]

LINUX_INSTALL_COMMANDS : list[str] = [
    "",
]

MAC_INSTALL_COMMANDS : list[str] = [
    f"sudo {DOWNLOAD_PATH_MAC} --root {INSTALL_PATH} --accept-licenses --default-answer --confirm-command install",
]

# Check if we are in an admin shell (windows == admin, linux / mac = sudo)
def is_admin():
    if os.name == "nt":
        import ctypes
        return ctypes.windll.shell32.IsUserAnAdmin() != 0
    else:
        return os.geteuid() == 0

# Getter for download command
def get_download_command() -> str:
    if IS_WINDOWS:
        return DOWNLOAD_LINK_WINDOWS
    elif IS_LINUX:
        return DOWNLOAD_LINK_LINUX
    else: # mac
        return DOWNLOAD_LINK_MAC

# Getter for install commands
def get_install_commands() -> list[str]:
    if IS_WINDOWS:
        return WINDOWS_INSTALL_COMMANDS
    elif IS_LINUX:
        return LINUX_INSTALL_COMMANDS
    else: # mac
        return MAC_INSTALL_COMMANDS

# Getter for download path
def get_download_path() -> Path:
    if IS_WINDOWS:
        return DOWNLOAD_PATH_WINDOWS
    elif IS_LINUX:
        return DOWNLOAD_PATH_LINUX
    else: # mac
        return DOWNLOAD_PATH_MAC

# Run the executable downloaded and other setup items
def install_vulkan():
    commands = get_install_commands()
    for command in commands:
        print(f"Executing : {command}")
        subprocess.run(command, shell=True)

# Removes the downloaded executable
def cleanup_install_executable():
    download_path : Path = get_download_path()
    if os.path.exists(download_path):
        os.remove(download_path)
    if IS_MAC and os.path.exists(EXTRACT_PATH_MAC):
        os.remove(EXTRACT_PATH_MAC)


# Downloads the vulkan executable installer and run it
def download_and_isntall_vulkan() -> None:
    os.makedirs(INSTALL_PATH, exist_ok=True)
    subprocess.run(get_download_command(), shell=True)
    install_vulkan()
    cleanup_install_executable()

# Main function that is imported and ran to install vulkan
def main() -> None:
    print(f"Detected OS: {OS_NAME}")

    if not is_admin():
        print("Not in an admin shell")
        return

    if IS_WINDOWS or IS_LINUX or IS_MAC:
        download_and_isntall_vulkan()
    else:
        print("Unsupported OS.")
        sys.exit(1)