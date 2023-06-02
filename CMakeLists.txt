cmake_minimum_required(VERSION 3.20)

project("STM32C031_DK_Blog" C CXX ASM)

include(cmake/st-project.cmake)
include(cmake/custom-path.cmake)

add_executable(${PROJECT_NAME})
add_st_target_properties(${PROJECT_NAME})
add_custom_path(${PROJECT_NAME})