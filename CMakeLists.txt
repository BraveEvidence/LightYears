cmake_minimum_required(VERSION 3.29.5)

project(LightYears VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)

include(FetchContent)
set(SFML_LIB_NAME SFML)
FetchContent_Declare(${SFML_LIB_NAME}
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.1
    GIT_SHALLOW FALSE
)
FetchContent_MakeAvailable(${SFML_LIB_NAME})

set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)
set(LIGHT_YEARS_ENGINE_TARGET_NAME LightYearsEngine)

add_subdirectory(LightYearsEngine)
add_subdirectory(LightYearsGame)

