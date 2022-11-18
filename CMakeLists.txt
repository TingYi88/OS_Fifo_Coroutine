cmake_minimum_required(VERSION 3.16)
project("My Stackful Coroutine")

add_subdirectory("libcoroutine")

add_executable(main)
target_sources(main PRIVATE
    "main.c"
)

target_link_libraries(main PRIVATE coroutine)