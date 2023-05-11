cmake_minimum_required(VERSION 3.4)

project(lib1 VERSION 1.0.0)
include_directories(include)
add_library(${PROJECT_NAME} 
	"src/lib1.cpp"
)
