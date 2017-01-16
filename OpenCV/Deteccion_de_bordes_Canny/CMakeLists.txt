cmake_minimum_required(VERSION 2.8)
project( DetectorCanny )
find_package( OpenCV REQUIRED )
add_executable( DetectorCanny DetectorCanny.cpp )
target_link_libraries( DetectorCanny ${OpenCV_LIBS} )

