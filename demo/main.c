#include <highgui.h>

int main(int argc,char ** argv) {

    IplImage* img = cvLoadImage(argv[1],CV_LOAD_IMAGE_COLOR);
    cvNamedWindow("Image_show",CV_WINDOW_AUTOSIZE);
    cvShowImage("Image_show",img);
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvDestroyWindow("Image_show");
    return 0;
}