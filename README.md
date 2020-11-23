# General problem

I have an Android Native application that targets two different API versions: 23 (Marshmallow) and 28 (Pie). For the API 28, I have no problem debugging a hello world application when it enters the C++ code: the debugger attaches itself and stops the execution at my breakpoints. For the API 23 however, the debugger attaches itself but never stops at the breakpoints. This behavior for both APIs is consistent across emulators and real devices.

# Versions
- Windows 10
- Android Studio 4.1.1
- Gradle 6.5
- NDK 21.1.6352462
- CMake 3.10.2.4988404
- Java 8.0.265-open

# Emulators comparison
## API 23

- Galaxy Nexus 4.65 720x1280
- Android 6.0 x86_64 (Marshmallow)

## API 28
- Galaxy Nexus 4.65 720x1280
- Android 9.0 x86_64 (Pie)

The only difference here is really the operating system. Everything else including memory allocation seems to be exactly the same.
