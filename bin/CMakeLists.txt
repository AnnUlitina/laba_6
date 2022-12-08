#cmake_minimum_required(VERSION 3.23)
#project(laba_5)

#set(CMAKE_CXX_STANDARD 14)

#add_executable(laba_5 main.cpp)
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE number)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
