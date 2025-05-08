cmake_minimum_required(VERSION 4.0.1)
project(CGPACalculator)
# 1. Min Version and project name.

# 2. Version standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt package
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Set UI files directory
set(UI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ui)

# 3. 
add_library(cgpa_lib STATIC
    src/Course.cpp
    src/US4ScaleConverter.cpp
    src/SemesterRecord.cpp
    src/Transcript.cpp
    src/FileHandler.cpp
    src/CGPACalculator.cpp
)

# 4. Head file path.
target_include_directories(cgpa_lib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)


# 5. Create executable file
add_executable(calc main.cpp)
target_link_libraries(calc PRIVATE cgpa_lib)

# UI files
set(UI_FILES
    ${UI_DIR}/MainWindow.ui
    ${UI_DIR}/CourseDialog.ui
)

# Qt sources and headers
set(QT_SOURCES
    src/main_qt.cpp
    src/MainWindow.cpp
    src/CourseDialog.cpp
)

set(QT_HEADERS
    include/MainWindow.h
    include/CourseDialog.h
)

# Generate UI headers
qt6_wrap_ui(UI_HEADERS ${UI_FILES})

add_executable(calc_qt
    ${QT_SOURCES}
    ${QT_HEADERS}
    ${UI_HEADERS}
)

target_include_directories(calc_qt PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}
    ${UI_DIR}
)

# Set the UI file search path
set_target_properties(calc_qt PROPERTIES
    AUTOUIC_SEARCH_PATHS "${UI_DIR}"
)

target_link_libraries(calc_qt PRIVATE
    cgpa_lib
    Qt6::Widgets
)