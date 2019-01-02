#include<iostream>
#include "mat.h"
#include <opencv2/core/core.hpp>
using namespace cv;

#define CVAA_LOGI (printf("%s(%d)-<%s>: ",__FILE__, __LINE__, __FUNCTION__), printf)

static int test_mat_create()
{
    Mat m = Mat(2,3,CV_32FC(1));
    CVAA_LOGI("h:%d,w:%d\n",m.rows,m.cols);
}

int mat_entry()
{
    test_mat_create();
    return 0;
}