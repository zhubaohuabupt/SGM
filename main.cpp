/*
Copyright :zhubaohua 2016
Beijing university of Post and Tecnology 
*/
#include"SGM.h"


int main ()
{


	
	Mat img11 =  imread("E:/matchpic/testbanch_data/raindeer_left.pgm", 0);
	Mat img22 = imread("E:/matchpic/testbanch_data/raindeer_right.pgm", 0);
		
		
			Mat img111,img222;//图片尺寸缩小
			cv::resize(img11,img111,CvSize(img11.cols/2,img11.rows/2));
			cv::resize(img22,img222,CvSize(img11.cols/2,img11.rows/2));
			imshow("img111",img111);
			cvWaitKey(10);
			
	SGM sgm;
	Mat disp;//float类型视差信息输出
	int Dmax=80;//设置最大搜索视差
	int path=1;//动态规划路径选择
	sgm.GetDisprity_mat(img111,img222,path,Dmax,true,disp);
	
	Mat disp8;//显示缓存
disp.convertTo(disp8,CV_8U,(float)256/Dmax); //disp为float类型，转化成CV_8U类型显示。
	imshow("disp8",disp8);
	waitKey(0);

}
