import os
import platform
import sys
import subprocess
from pathlib import Path

# Vulcan version to install
VULCAN_VERSION = "1.4.341.0"

# Operating system variables
OS_NAME : str = platform.system()
IS_WINDOWS : bool = OS_NAME == "Windows"
IS_LINUX : bool = OS_NAME == "Linux"
IS_MAC : bool = OS_NAME == "Darwin"

# Paths
ROOT : Path = Path("C:/") if IS_WINDOWS else Path("/")
DOWNLOAD_PATH_WINDOWS : Path = Path("temp/vulcan.exe")
DOWNLOAD_PATH_LINUX : Path = Path("temp/vulcan.tar.xz")
DOWNLOAD_PATH_MAC : Path = Path("temp/vulcan.zip")
EXTRACT_PATH_MAC : Path = Path("temp/ ")
INSTALL_PATH : Path = ROOT / "FlameSpearEngine_SDKs" / "Vulkan"

# Download links
DOWNLOAD_LINK_WINDOWS : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULCAN_VERSION}/windows/vulkansdk-windows-X64-{VULCAN_VERSION}.exe -o {DOWNLOAD_PATH_WINDOWS}"
DOWNLOAD_LINK_LINUX : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULCAN_VERSION}/linux/vulkansdk-linux-x86_64-{VULCAN_VERSION}.tar.xz -o {DOWNLOAD_PATH_LINUX}"
DOWNLOAD_LINK_MAC : str = f"curl -L https://sdk.lunarg.com/sdk/download/{VULCAN_VERSION}/mac/vulkansdk-macos-{VULCAN_VERSION}.zip -o {DOWNLOAD_PATH_MAC}"

# Commands to install vulcan
WINDOWS_INSTALL_COMMANDS : list[str] = [
    f"{DOWNLOAD_PATH_WINDOWS} --root {INSTALL_PATH} --accept-licenses --default-answer --confirm-command install",
]

LINUX_INSTALL_COMMANDS : list[str] = [
    "",
]

MAC_INSTALL_COMMANDS : list[str] = [
    f"sudo {DOWNLOAD_PATH_MAC} --root {INSTALL_PATH} --accept-licenses --default-answer --confirm-command install",
]

def is_admin():
    if os.name == "nt":
        # Windows
        import ctypes
        return ctypes.windll.shell32.IsUserAnAdmin() != 0
    else:
        # POSIX (Linux/macOS)
        return os.geteuid() == 0

def get_download_command() -> str:
    if IS_WINDOWS:
        return DOWNLOAD_LINK_WINDOWS
    elif IS_LINUX:
        return DOWNLOAD_LINK_LINUX
    else: # mac
        return DOWNLOAD_LINK_MAC

def get_install_commands() -> list[str]:
    if IS_WINDOWS:
        return WINDOWS_INSTALL_COMMANDS
    elif IS_LINUX:
        return LINUX_INSTALL_COMMANDS
    else: # mac
        return MAC_INSTALL_COMMANDS
    
def install_vulkan():
    commands = get_install_commands()
    for command in commands:
        print(f"Executing : {command}")
        subprocess.run(command, shell=True)

def install_windows() -> None:
    subprocess.run(get_download_command(), shell=True)
    install_vulkan()

def install_linux() -> None:
    subprocess.run(get_download_command(), shell=True)
    install_vulkan()

def install_mac() -> None:
    subprocess.run(get_download_command(), shell=True)
    install_vulkan()

# -----------------------------
# Main
# -----------------------------
def main() -> None:
    print(f"Detected OS: {OS_NAME}")

    if not is_admin():
        print("Not in an admin shell")
        return

    os.makedirs(INSTALL_PATH, exist_ok=True)

    if IS_WINDOWS:
        install_windows()
    elif IS_LINUX:
        install_linux()
    elif IS_MAC:
        install_mac()
    else:
        print("Unsupported OS.")
        sys.exit(1)