#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
	//练习一
	cv::Mat img = imread("C:\\Users\\YangYF\\Desktop\\1.jpg");
	imshow("img", img);
	int height = img.rows;//行
	int width = img.cols;//列
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			uchar average = (img.at<Vec3b>(j, i)[0] + img.at<Vec3b>(j, i)[1] + img.at<Vec3b>(j, i)[2]) / 3;
			img.at<Vec3b>(j, i)[0] = average;
			img.at<Vec3b>(j, i)[1] = average;
			img.at<Vec3b>(j, i)[2] = average;
		}
	}
   imshow("img1", img);
   //练习二
   cv::Mat img2 = imread("C:\\Users\\YangYF\\Desktop\\1.jpg",0);
   imshow("img2", img2);
   //练习三
   cv::Mat img3 = imread("C:\\Users\\YangYF\\Desktop\\1.jpg");
   int height1 = img3.rows;//行
   int width1 = img3.cols;//列
   for (int i = 0; i<width1; i++)
   {
	   for (int j = 0; j < height1; j++)
	   {

		   uchar threshold = 100;


		   uchar average = (img3.at<Vec3b>(j, i)[0] + img3.at<Vec3b>(j, i)[1] + img3.at<Vec3b>(j, i)[2]) / 3;
		   if (average > threshold)
			   average = 255;
		   else
			   average = 0;
		   img3.at<Vec3b>(j, i)[0] = average;
		   img3.at<Vec3b>(j, i)[1] = average;
		   img3.at<Vec3b>(j, i)[2] = average;
	   }
   }
   imshow("img3",img3);
   //练习四

	waitKey(0);
	return 0;
	
}