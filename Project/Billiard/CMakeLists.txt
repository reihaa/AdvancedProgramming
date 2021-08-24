cmake_minimum_required(VERSION 3.9)
project(Billiard)

set(CMAKE_CXX_STANDARD 11)

add_executable(main.cpp headers/game.h sources/game.cpp)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(Billiard ${SFML_LIBRARIES})
endif()
