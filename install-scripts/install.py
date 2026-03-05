from installutil import is_supported, is_admin, OS_NAME

from vulkan.vulkaninstall import main as vulkaninstall 
from premake.premakeinstall import main as premakeinstall
from ninja.ninjainstall import main as ninjainstall

import sys

def main() -> None:
    print(f"Detected OS: {OS_NAME}")
    
    if not is_supported():
        print("Unsupported OS.")
        sys.exit(1)

    if not is_admin():
        print("Not in an admin shell")
        sys.exit(1)

    vulkaninstall()
    premakeinstall()
    ninjainstall()

if __name__ == "__main__":
    main()