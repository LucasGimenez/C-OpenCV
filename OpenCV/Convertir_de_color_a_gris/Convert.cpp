#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>

using namespace cv;

int main( int argc, char** argv )
{


 Mat image;
 image = imread( "reptil.jpg", 0 );

 if( argc != 2 || !image.data )
 {
   printf( " No image data  " );
   return -1;
 }

  namedWindow("GRIS", CV_WINDOW_AUTOSIZE);

  imshow("GRIS", image);

  waitKey(0);

 return 0;
}
