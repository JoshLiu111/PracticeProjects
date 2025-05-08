cmake_minimum_required(VERSION 4.0.1)
project(MindMap)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#Source file path
include_directories(include)
file(GLOB SOURCES
    src/*.cpp
)

add_executable(mindmap ${SOURCES})
#add test 
add_executable(test_node 
    test/test_node.cpp
    test/catch_amalgamated.cpp 
    src/Node.cpp
)
target_include_directories(test_node PRIVATE include)
