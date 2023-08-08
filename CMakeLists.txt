cmake_minimum_required(VERSION 3.25)

project(superz-code-cpp VERSION 0.0.1 LANGUAGES C CXX)

include_directories(${PROJECT_SOURCE_DIR}/include)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(CURL CONFIG REQUIRED)

add_executable(demo src/demo.c)
add_executable(sqlite3_demo src/sqlite3_demo.c)
add_executable(curl_demo src/curl_demo.c)
add_executable(socket_demo src/socket_demo.c)

target_link_libraries(sqlite3_demo PRIVATE unofficial::sqlite3::sqlite3)
target_link_libraries(curl_demo PRIVATE CURL::libcurl)
