# ACA
Example projects

## cmake-ctest
cmake-ctest is a simple CMake/CTest project.
We can compile and run test:
```
$ cmake -S. -Bbuild
$ cd build
$ cmake --build .
$ ctest -C Debug
```

## sqrt-gtest-visualstudio.
sqrt-gtest-visualstudio is a visual studio solution using simple library project and google test project.

static library project
![vs_static_lib](https://user-images.githubusercontent.com/4984553/210807895-225b4470-f878-47ce-a385-6fdbc25f565c.jpg)

google test project
![vs_gtest](https://user-images.githubusercontent.com/4984553/210807233-4df67273-d328-45db-b6b2-304eb2fa3b6b.jpg)

Requirement for sqrt-gtest-visualstudio: Test adapter for google test
![gtest1](https://user-images.githubusercontent.com/4984553/210808406-b0a4aa59-d83a-444a-bff6-50c97ccdbe2c.jpg)
![gtest2](https://user-images.githubusercontent.com/4984553/210808423-07f14cd9-e597-4136-aa16-e2e6f0851db9.jpg)

## sqrt-gtest-vcpkg-cmake.
sqrt-gtest-vcpkg-cmake is a CMake project, it creates a simple library with `my_sqrt` function and test it using google test. In order to install google test it uses vcpkg package manager.

In order to build the project using visual studio code:
1. Install CMake plugin in visual studio code.
2. Install vcpkg (https://vcpkg.io/en/getting-started.html)
3. View -> Command Palette -> Open User Settings (JSON)
4. Add
```JSON
"cmake.configureOnOpen": true,
"cmake.configureSettings": {
  "CMAKE_TOOLCHAIN_FILE": "D:/Workspace/vcpkg/scripts/buildsystems/vcpkg.cmake"
}
```
Final settings json file should look like something similar to 
```JSON
{
    "go.toolsManagement.autoUpdate": true,
    "cmake.configureOnOpen": true,
    "cmake.configureSettings": {
        "CMAKE_TOOLCHAIN_FILE": "D:/Workspace/vcpkg/scripts/buildsystems/vcpkg.cmake"
    },
    "redhat.telemetry.enabled": true
}
```
5. Build the project using CMake plugin (pick a kit when prompted)
6. Run my_sqrt_test project using CMake plugin
