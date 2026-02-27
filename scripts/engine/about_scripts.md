# About the scripts

## Endings of scripts
**_window.bat** is the script for running that task on windows devices  
**_linux.sh** is the script for running that task on linux devices  
**_mac.sh** is the script for running that task on mac devices  

## Scripts
Scripts that you can use in Flame Spear Engine

**setup_all_and_run + ending**  
This script runs these things
1. Downloads and installs python (3.13.12)
2. Uses python to install other Flame Spear Engine dependencies
    1. Vulkan (to interact with GPU)
    2. Premake (To create ninja build files)
    3. Ninja (To build the engine)
3. Uses premake to create ninja build files
4. Uses ninja to build the engine executable
5. Moves the engine executable 
    1. If built in debug then it moves it to a testing release folder
    2. If built in release it puts it in the release folder for the specified version
6. Calls the project run script (specified as an argument)

Args
1. "--ProjectPath" - The path to the folder containing the project that you would like to run

EG (from Flame Spear Engines root dir)
```

```

**setup_all + ending**  
This script runs these things
1. Downloads and installs python (3.13.12)
2. Uses python to install other Flame Spear Engine dependencies
    1. Vulkan (to interact with GPU)
    2. Premake (To create ninja build files)
    3. Ninja (To build the engine)
3. Uses premake to create ninja build files
4. Uses ninja to build the engine executable
5. Moves the engine executable 
    1. If built in debug then it moves it to a testing release folder
    2. If built in release it puts it in the release folder for the specified version

EG (from Flame Spear Engines root dir)
```

```

**fetch_deps/fetch_python/fetch_python + ending**
This script runs these things  
1. Downloads and installs python (3.13.12)

EG (from Flame Spear Engines root dir)
```

```

**fetch_deps/fetch + ending**
This script runs these things  
1. Uses python to install other Flame Spear Engine
    1. Vulkan (to interact with GPU)
    2. Premake (To create ninja build files)
    3. Ninja dependencies (To build the engine)

EG (from Flame Spear Engines root dir)
```

```

**setup_build/setup_build + ending**
This script runs these things  
1. Uses premake to create ninja build files

EG (from Flame Spear Engines root dir)
```

```

**build/build + ending**
This script runs these things  
1. Uses ninja to build the engine executable
2. Moves the engine executable 
    1. If built in debug then it moves it to a testing release folder
    2. If built in release it puts it in the release folder for the specified version

EG (from Flame Spear Engines root dir)
```

```

**run/run + ending**
This script runs these things  
1. Calls the project run script (specified as an argument)

Args
1. "--ProjectPath" - The path to the folder containing the project that you would like to run

EG (from Flame Spear Engines root dir)
```

```
