#include <opencv2\opencv.hpp>
#include <stdio.h>
#include <string>
#include "data_argument.h"

using namespace cv;
extern int crop_imgs(String filename);
/* macros */
#define SHOW_IMG
static int using_box_filter(Mat img, Mat *img_bf)
{
	cv::Size ksize;
	ksize.width = 100;
	ksize.height = 100;
	cv::boxFilter(img, *img_bf, -1, ksize, cv::Point(-1, -1), true, 4);
	return 0;
}

static int using_Gaussian_filter(Mat img, Mat *img_bf)
{
	cv::Size ksize;
	ksize.width = 99;
	ksize.height = 99;
	double sigmaX = 1;
	double sigmaY = 1;
	cv::GaussianBlur(img, *img_bf, ksize, sigmaX, sigmaY, 4);
	return 0;
}
static int using_median_filter(Mat img, Mat *img_bf)
{
	int ksize = 91;
	cv::medianBlur(img, *img_bf, ksize);
	return 0;
}
/*\brief 
 * show image with filters.
 *
 **/
int test_image_filters(String imgpath)

{
	//从文件中读入图像
	Mat img = imread(imgpath);
	Mat img_bf;
	//如果读入图像失败

	if (img.empty()) {
		fprintf(stderr, "Can not load image %s\n", imgpath);
		return -1;
	}

	//显示图像
	//using_box_filter(img, &img_bf);
	//using_Gaussian_filter(img, &img_bf);
	using_median_filter(img, &img_bf);
#ifdef SHOW_IMG
	imshow("image", img);
	imshow("image ater bf", img_bf);
	//此函数等待按键，按键盘任意键就返回

	waitKey();
#endif

	return 0;

}
int main(int argc, char* argv[]) {
	String imgpath="D:\\work\\stuff\\modules\\misc\\sprd_camera\\alg\\july\\matlab\\cvaa\\cc\\lena.jpg";
	//test_image_filters(imgpath);
	crop_imgs(imgpath);
}