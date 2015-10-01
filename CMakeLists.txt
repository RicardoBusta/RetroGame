#   RetroGameSDL by Ricardo Bustamante de Queiroz (ricardo@busta.com.br)       #
#   Copyright (C) {year}  {name of author}                                     #
#                                                                              #
#   This program is free software: you can redistribute it and/or modify       #
#   it under the terms of the GNU General Public License as published by       #
#   the Free Software Foundation, either version 3 of the License, or          #
#   (at your option) any later version.                                        #
#                                                                              #
#   This program is distributed in the hope that it will be useful,            #
#   but WITHOUT ANY WARRANTY; without even the implied warranty of             #
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              #
#   GNU General Public License for more details.                               #
#                                                                              #
#   You should have received a copy of the GNU General Public License          #
#   along with this program.  If not, see <http://www.gnu.org/licenses/>.      #

project(RetroGameSDL CXX)
cmake_minimum_required(VERSION 3.3)

set(ROOT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "Using ${CMAKE_CXX_COMPILER_ID} compiler")
# Adds necessary flags for different kind of compilers.
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU" OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++11")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} -g")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} -O2")
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
  if (CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif()
endif()

#set(SDL_STATIC OFF)
#set(SDL_SHARED ON)

#set(CMAKE_BUILD_TYPE_BACKUP ${CMAKE_BUILD_TYPE})

#set(CMAKE_BUILD_TYPE RELEASE)

#add_subdirectory("third_party/SDL2-2.0.3")
#include_directories("third_party/SDL2-2.0.3/include")

#set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE_BACKUP})

#set(SDL2_LIBRARY "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL2-2.0.3/lib/x64")
#set(SDL2_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL2-2.0.3/include")
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules")
#find_package(SDL2 REQUIRED)
#message(STATUS "SDL2_FOUND ${SDL2_FOUND}")
#include_directories(${SDL2_INCLUDE_DIR})

add_subdirectory("game")
