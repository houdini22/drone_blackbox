cmake_minimum_required(VERSION 3.12)
project(gamepad)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(gamepad
        ${CURSES_INCLUDE_DIR}
        gamepad.cpp
        gamepad.h
        main.cpp)

target_link_libraries(gamepad ncurses)
target_link_libraries(gamepad serial)
target_link_libraries(gamepad udev)
target_link_libraries(gamepad pthread)