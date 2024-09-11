cmake_minimum_required(VERSION 3.30)

project(install-custom-lib)

set (MAIN_NAME main)
file(GLOB MAIN ${CMAKE_CURRENT_SOURCE_DIR}/main.c)

####################################################################################
# Install Custom Library:
####################################################################################
include(FetchContent)
FetchContent_Declare(
  custom-lib
  GIT_REPOSITORY https://github.com/JHowell45/installing-libraries-c.git
  GIT_TAG        103d3f31c0ade7742b7ac33ad8ed6f61670332ef # v0.0.1
)
FetchContent_MakeAvailable(custom-lib)

####################################################################################
# Create Executable:
####################################################################################
add_executable(${MAIN_NAME} ${MAIN})
target_link_libraries(${MAIN_NAME} custom-lib)