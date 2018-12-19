cmake_minimum_required(VERSION 3.8)
project(gamepad)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp gamepad.cpp gamepad.h)
add_executable(gamepad ${SOURCE_FILES})

target_link_libraries(gamepad -lusb-1.0 -ludev -lc -lm -lncurses -lserial -lpthread)
