#include <highgui.h>
#include "mat.h"
int test_demo(int argc,char ** argv)
{
    IplImage* img = cvLoadImage(argv[1],CV_LOAD_IMAGE_COLOR);
    cvNamedWindow("Image_show",CV_WINDOW_AUTOSIZE);
    cvShowImage("Image_show",img);
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvDestroyWindow("Image_show");    
}
int main(int argc,char ** argv) {

    //test_demo(argc,argv);
    mat_entry();
    return 0;
}