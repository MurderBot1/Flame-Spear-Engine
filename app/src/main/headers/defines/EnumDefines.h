#ifndef EnumDefines_H
#define EnumDefines_H

#if defined(_WIN32) || defined(_WIN64)
    #define ENUM_DEF(name, win, linux, mac) name = win,
#elif defined(__linux__)
    #define ENUM_DEF(name, win, linux, mac) name = linux,
#elif defined(__APPLE__) || defined(__MACH__)
    #define ENUM_DEF(name, win, linux, mac) name = mac,
#endif

#endif