set(LIBRARY_NAME playerbots)

file(GLOB Playerbot_Source ${CMAKE_CURRENT_SOURCE_DIR}/playerbot/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/playerbot/*.h)
    source_group("Player Bot" FILES ${Playerbot_Source})

set(LIBRARY_SRCS
    ${Playerbot_Source}
)

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SRCS})

set_target_properties(${LIBRARY_NAME} PROPERTIES PROJECT_LABEL "PlayerBots")