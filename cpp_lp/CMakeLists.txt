cmake_minimum_required(VERSION 3.7)

project("CPP_LP")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 17)

add_definitions(-DANTLR4CPP_STATIC)

set(ANTLR4_WITH_STATIC_CRT OFF)

include(ExternalAntlr4Cpp)

include_directories(${ANTLR4_INCLUDE_DIRS})

set(ANTLR_EXECUTABLE D:/agohya/antlr/antlr-4.10.1-complete.jar)

find_package(ANTLR REQUIRED)

# Lexer grammar

antlr_target()