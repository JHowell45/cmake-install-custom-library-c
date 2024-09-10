cmake_minimum_required(VERSION 3.30)

project(install-custom-lib)

set (MAIN_NAME main)
file(GLOB MAIN ${CMAKE_CURRENT_SOURCE_DIR}/main.c)

####################################################################################
# Install Custom Library:
####################################################################################
include(FetchContent)
FetchContent_Declare(
  customlib
  GIT_REPOSITORY https://github.com/JHowell45/installing-libraries-c.git
  GIT_TAG        3c5285157281224b4706f50b9da2f0cbaac3b533 # v0.0.1
)
FetchContent_MakeAvailable(customlib)

####################################################################################
# Create Executable:
####################################################################################
add_executable(${MAIN_NAME} ${MAIN})
target_link_libraries(${MAIN_NAME} customlib)