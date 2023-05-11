cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)

project(exe1 VERSION 1.0.0)

find_package(OpenCV REQUIRED)

include_directories(
	../lib1/include
	../lib2/include
)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
	lib1
	lib2
	${OpenCV_LIBS}
)
