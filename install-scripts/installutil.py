import os
import platform
from pathlib import Path
import subprocess

# Operating system variables
OS_NAME : str = platform.system()
IS_WINDOWS : bool = OS_NAME == "Windows"
IS_LINUX : bool = OS_NAME == "Linux"
IS_MAC : bool = OS_NAME == "Darwin"

# Paths
ROOT : Path = Path("C:/") if IS_WINDOWS else Path("/")

def is_admin() -> bool:
    if os.name == "nt":
        import ctypes
        return ctypes.windll.shell32.IsUserAnAdmin() != 0
    else:
        return os.geteuid() == 0
    
def get_curl_command(link : str, out_path : Path) -> str:
    return f"curl -L {link} -o {out_path}"

# check if the targets OS is supported by FSE
def is_supported() -> bool:
    return (IS_WINDOWS or IS_LINUX or IS_MAC)

# returns the correct string depending on OS
def get_download_command(DOWNLOAD_LINK_WINDOWS : str, DOWNLOAD_LINK_LINUX : str, DOWNLOAD_LINK_MAC : str) -> str:
    if IS_WINDOWS:
        return DOWNLOAD_LINK_WINDOWS
    elif IS_LINUX:
        return DOWNLOAD_LINK_LINUX
    else: # mac
        return DOWNLOAD_LINK_MAC

# returns the correct string list depending on OS
def get_commands(WINDOWS_INSTALL_COMMANDS : list[str], LINUX_INSTALL_COMMANDS : list[str], MAC_INSTALL_COMMANDS : list[str]) -> list[str]:
    if IS_WINDOWS:
        return WINDOWS_INSTALL_COMMANDS
    elif IS_LINUX:
        return LINUX_INSTALL_COMMANDS
    else: # mac
        return MAC_INSTALL_COMMANDS

# returns the correct path depending on OS
def get_path(DOWNLOAD_PATH_WINDOWS : Path, DOWNLOAD_PATH_LINUX : Path, DOWNLOAD_PATH_MAC : Path) -> Path:
    if IS_WINDOWS:
        return DOWNLOAD_PATH_WINDOWS
    elif IS_LINUX:
        return DOWNLOAD_PATH_LINUX
    else: # mac
        return DOWNLOAD_PATH_MAC
    
# runs the commands (strings) in a shell
def run_commands(commands : list[str]) -> None:
    for command in commands:
        print(f"Executing : {command}")
        subprocess.run(command, shell=True)