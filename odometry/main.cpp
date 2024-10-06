#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>

using namespace cv;

int main()
{
    VideoCapture cap(0);
    if(!cap.isOpened()) return -1;

    namedWindow("camera_test", WINDOW_AUTOSIZE );

    Mat frame;

    for(;;)
    {
        cap >> frame;
        // cvtColor(frame, frame, COLOR_BGR2GRAY);
        imshow("camera_test", frame);
        
        if(waitKey(30) >= 0) break;
    }

}