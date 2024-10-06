#include <opencv2/opencv.hpp>

using namespace cv;
 
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: opencv_test <Image_Path>\n");
        return -1;
    }
 
    Mat image;
    image = imread( argv[1], IMREAD_COLOR );
 
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("opencv_test", WINDOW_AUTOSIZE );
    imshow("opencv_test", image);
 
    waitKey(0);
 
    return 0;
}