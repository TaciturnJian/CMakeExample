cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)
project(TEST_PROJECT)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(LIBRARIES_SUBDIRECTORIES
	src/lib1
	src/lib2
)

foreach(var_path ${LIBRARIES_SUBDIRECTORIES})
	add_subdirectory(${var_path})
endforeach()

set(EXECUTABLE_SUBDIRECTORIES 
	src/exe1
	src/exe2
)

foreach(var_path ${EXECUTABLE_SUBDIRECTORIES})
	add_subdirectory(${var_path})
endforeach()
