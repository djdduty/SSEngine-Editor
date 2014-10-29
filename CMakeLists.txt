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

set(GLFWDIR "" CACHE PATH "Path to glfw dir")
set(GLEWDIR "" CACHE PATH "Path to glew dir")
set(SOILDIR "" CACHE PATH "Path to soil dir")
set(ZDIR "" CACHE PATH "Path to zlib dir")
set(GLDIR "" CACHE PATH "Path to openGL dir")
set(ASSIMPDIR "" CACHE PATH "Path to Assimp dir")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake-extras/")

set(GLFWDIR "${PROJECT_SOURCE_DIR}/dependencies/glfw")
set(GLEWDIR "${PROJECT_SOURCE_DIR}/dependencies/glew")
set(SOILDIR "${PROJECT_SOURCE_DIR}/dependencies/soil")
set(ASSIMPDIR "${PROJECT_SOURCE_DIR}/dependencies/Assimp")
set(ZDIR "${ASSIMPDIR}/contrib/zlib")

ADD_SUBDIRECTORY(dependencies)
find_package(GL REQUIRED)
find_package(X11 REQUIRED)

include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/SSEngine/src/ ${GLFWDIR}/include ${ASSIMPDIR}/include ${gl_INCLUDE_DIRS} ${GLEWDIR}/include ${ZDIR} ${SOILDIR})

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

add_subdirectory(${PROJECT_SOURCE_DIR}/SSEngine)
add_subdirectory(${PROJECT_SOURCE_DIR}/Editor)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/SSEngine/src/" DESTINATION include/SSEngine FILES_MATCHING PATTERN "*.h")
