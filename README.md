# pthreads4w-fetchcontent-example

This repo demonstrates the use of pthreads4w with fetchContent()

```cmake
cmake_minimum_required(VERSION 3.24)
project(pthreads4w-example)

include(FetchContent)
FetchContent_Declare(
        pthreads4w
        GIT_REPOSITORY "https://github.com/ahoarau/pthread-win32"
        GIT_TAG modernize-cmake
        OVERRIDE_FIND_PACKAGE
)
find_package(pthreads4w CONFIG REQUIRED)

add_executable(pthreads4w-example pthreads4w-example.c)
target_link_libraries(pthreads4w-example PRIVATE pthreads4w::pthreadVC3)
```

