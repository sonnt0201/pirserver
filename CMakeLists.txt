cmake_minimum_required(VERSION 3.10)

project(PirServer VERSION 1.0)


# file(GLOB MODELS ./models/*.cpp)
# file(GLOB CONTROLLERS ./controllers/*.cpp)
 # Include directory for libpq headers

add_executable(main 
main.cpp 
./models/PIRDB.cpp
./models/Request.cpp
./models/Response.cpp
./controllers/server.cpp
./controllers/Filter.cpp
./controllers/Controller.cpp
lib/sqlite3.c
lib/jsoncpp.cpp
lib/utils.cpp
)

target_link_libraries(main PUBLIC ws2_32 )  

add_custom_target(run 
    COMMAND mingw32-make
    COMMAND main
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Compile and run server"
)
