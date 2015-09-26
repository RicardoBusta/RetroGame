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

project(Game CXX)
cmake_minimum_required(VERSION 3.3)

set(SOURCES
  main.cpp
)

set(HEADERS
)

add_executable(${PROJECT_NAME} "${SOURCES} ${HEADERS}")
target_link_libraries(${PROJECT_NAME} SDL2main SDL2)

#install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
