cmake_minimum_required(VERSION 2.8)
project( Binario )
find_package( OpenCV REQUIRED )
add_executable( Binario Binario.cpp )
target_link_libraries( Binario ${OpenCV_LIBS} )

