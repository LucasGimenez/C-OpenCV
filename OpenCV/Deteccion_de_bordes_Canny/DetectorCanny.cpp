
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "IVVI.jpg";
	Mat imagen, ImagenCanny;
	
	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	imagen = cv::imread(NombreImagen);
	if( !imagen.data ) { 
		cout<< "Error al cargar la imagen: " << NombreImagen <<endl;
		exit(1);
	}
	
	Canny(imagen, ImagenCanny, 100, 150, 3);
	
	//Mostrar la imagen
	namedWindow("Original", CV_WINDOW_AUTOSIZE);
	imshow("Original", imagen );

	namedWindow("Canny", CV_WINDOW_AUTOSIZE);
	imshow("Canny", ImagenCanny);

    //Creando la imagen resultado
	imwrite("ImagenPrueba.jpg", ImagenCanny);
	
	//Esperar a pulsar una tecla
	waitKey(0);
	
	return 0;
}
