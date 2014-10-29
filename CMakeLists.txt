cmake_minimum_required(VERSION 2.6)
project(SSEngineEditor)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)

include_directories(${Qt5Widgets_INCLUDES})
add_definitions(${Qt5Widgets_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set(BUILD_STATIC TRUE CACHE BOOL "TRUE to build static libraries, FALSE to build shared libraries (preferred)")
set(BUILD_GAME TRUE CACHE BOOL "TRUE to build the game, FALSE to not build it")

include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/SSEngine/src/ ${GLFWDIR}/include ${ASSIMPDIR}/include ${gl_INCLUDE_DIRS} ${GLEWDIR}/include ${ZDIR} ${SOILDIR})

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

add_subdirectory(${PROJECT_SOURCE_DIR}/SandboxSimulator2014)
add_subdirectory(${PROJECT_SOURCE_DIR}/Editor)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/SSEngine/src/" DESTINATION include/SSEngine FILES_MATCHING PATTERN "*.h")
