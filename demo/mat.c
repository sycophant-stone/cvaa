#include<iostream>
#include "mat.h"
#include <opencv2/core/core.hpp>
using namespace cv;

#define CVAA_LOGI (printf("%s(%d)-<%s>: ",__FILE__, __LINE__, __FUNCTION__), printf)


int mat_entry()
{
    Mat m = Mat(2,3,CV_32FC(1));
    return 0;
}