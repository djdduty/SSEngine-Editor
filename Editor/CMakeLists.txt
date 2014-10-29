file(GLOB game_top_SOURCES src/*.*)

#include_directories(${PROJECT_SOURCE_DIR}/engine/src)

QT5_WRAP_UI(src/mainwindow.ui)

include_directories(src/)

add_executable(SSEditor ${game_top_SOURCES} ${UIS_HDRS})

source_group("SSEditor\\" FILES ${game_top_SOURCES})

target_link_libraries(SSEditor SSEngine ${Qt5Widgets_LIBRARIES})
