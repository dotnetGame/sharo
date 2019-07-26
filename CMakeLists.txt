
project(sharo)

cmake_minimum_required(VERSION 3.14)

set(SHARO_PATH ${PROJECT_SOURCE_DIR} CACHE STRING "Adds a path to sharo" FORCE)
set(SHARO_PATH_INCLUDE ${SHARO_PATH}/include CACHE STRING "Adds a path to sharo header" FORCE)
set(SHARO_PATH_HEADER ${SHARO_PATH}/include/sharo CACHE STRING "Adds a path to sharo header" FORCE)
set(SHARO_PATH_SOURCE ${SHARO_PATH}/source CACHE STRING "Adds a path to sharo source" FORCE)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_subdirectory(demo)