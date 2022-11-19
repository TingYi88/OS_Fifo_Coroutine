cmake_minimum_required(VERSION 3.16)
project("Coroutine")

add_library(coroutine)
target_include_directories(coroutine PUBLIC "src/")
target_sources(coroutine PRIVATE
    "src/coroutine.c"
    "src/rbtree.c"
    "src/runqueue.c"
    "src/runstack.c"
    "src/sched.c"
)
