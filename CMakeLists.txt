cmake_minimum_required(VERSION 3.10)

project(PirServer VERSION 1.0)


# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main main.cpp models/server.cpp ./models/Request.cpp ./models/Response.cpp controller.cpp)

target_link_libraries(main PRIVATE ws2_32)

add_custom_target(run 
COMMAND mingw32-make
COMMAND main
WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
COMMENT "Compile and run server"
)




