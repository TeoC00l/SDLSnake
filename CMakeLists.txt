#@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu

cmake_minimum_required(VERSION "3.21.3")

project("SnakeSDL")

add_executable("${PROJECT_NAME}" "main.cpp" "map.cpp" "window.cpp")

add_subdirectory(external/SDL)

target_include_directories("${PROJECT_NAME}" PUBLIC external/SDL/include)

target_link_directories("${PROJECT_NAME}" PRIVATE external/SDL)

target_link_libraries("${PROJECT_NAME}" SDL2)


#When you clone the project, it is not automatically going to grab the submodules.
#You can write this git command to do this:
#	git submodule update --init --recursive
#or you can do this in the cmake file:
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()