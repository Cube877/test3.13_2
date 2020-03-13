// test3.13_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
	cv::Mat srcMat = imread("E:\\Picture\\Camera Roll\\1.jpg");
	cv::Mat grayMat;
	cv::Mat result_one;
	cv::Mat result_two;
	
	cvtColor(srcMat, grayMat, COLOR_BGR2GRAY);
	threshold(grayMat,  result_one, 100, 255, THRESH_OTSU);
	adaptiveThreshold(grayMat, result_two, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("gray", grayMat);
	imshow("result_one", result_one);
	imshow("result_two", result_two);

	waitKey(0);
    return 0;
}

