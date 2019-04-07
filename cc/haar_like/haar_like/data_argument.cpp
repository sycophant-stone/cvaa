#include "cv.h"
#include "highgui.h"
#include <opencv2\opencv.hpp>
#include <iostream>
#include "data_argument.h"

using namespace std;
using namespace cv;

//�ӱ���ͼƬ�������ȡͼ��飬���������ɸ�����
#define kImageBlockWidth                40        //ͼ����С
#define kImageBlockHeight                40        
#define kLoopTimes                        1000    //����������

int crop_imgs(String filename)
{
	int originX = 0, originY = 0;
	int width_limited = 0, height_limited = 0;
	int width = 0, height = 0;
	IplImage *bgImage = cvLoadImage(filename.c_str());
	IplImage *blockImage = cvCreateImage(cvSize(kImageBlockWidth, kImageBlockHeight), bgImage->depth, bgImage->nChannels);
	width = bgImage->width;
	height = bgImage->height;
	width_limited = width - kImageBlockWidth;
	height_limited = height - kImageBlockHeight;
	cout << width_limited << "   " << height_limited;
	for (int i = 0; i < kLoopTimes; i++)
	{
		originX = rand() % width_limited;
		originY = rand() % height_limited;
		cvZero(blockImage);
		CvPoint2D32f center_block = cvPoint2D32f(originX + kImageBlockWidth / 2, originY + kImageBlockHeight / 2);
		cvGetRectSubPix(bgImage, blockImage, center_block);
		char saveFileName[100] = { '\0' };
		sprintf_s(saveFileName, "neg\\%d.bmp", i + 1); // ע��������ʽ, ������win��,û��Ȩ�޴����ļ���,��Ҫ�Լ���ǰ����.
		cout << saveFileName;
		cvSaveImage(saveFileName, blockImage);
		//cvSaveImage("h.bmp", blockImage); // cv save�����õ�.
	}
	cvReleaseImage(&bgImage);
	cvReleaseImage(&blockImage);
	system("pause");
	return 0;
}
