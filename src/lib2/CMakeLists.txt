cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)

project(lib2 VERSION 1.0.0)
include_directories(include)
add_library(${PROJECT_NAME} 
	"src/lib2.cpp"
)
