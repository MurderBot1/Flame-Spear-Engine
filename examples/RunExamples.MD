# Windows Example
To run the windows example run these commands in your terminal as admin from the flame spear engine projects root directory

**Command prompt**
```
./scripts/setup_all_and_run_window.bat -ProjectPath %CD%/examples/example_project_windows
```

**Powershell**
```
./scripts/setup_all_and_run_window.bat -ProjectPath ((Get-Location).Path + /examples/example_project_windows)
```

# Mac Example
To run the mac example run these commands in your terminal as admin from the flame spear engine projects root directory

**Terminal**
```
./scripts/setup_all_and_run_mac.sh -ProjectPath "$(pwd)/examples/example_project_mac"
```

# Linux Example
To run the linux example run these commands in your terminal as admin from the flame spear engine projects root directory

**Terminal**
```
./scripts/setup_all_and_run_linux.sh -ProjectPath "$(pwd)/examples/example_project_linux"
```