cmake_minimum_required(VERSION 3.15)
project(CppCCallback)

set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall -pedantic)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
        src/main.cpp
        src/Foo.cpp
        src/Test.c
        )

# Add an executable with the above sources
add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        )