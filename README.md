SGM为一个类。
依赖：
opencv

算法简介：
代价：CT 默认5*5
规划：半全局规划 
后处理：LRcheck，亚像素插值，中值滤波。

结口说明：
类中的
int GetDisprity_mat(cv::Mat& img11,cv::Mat &img22,int path,int DMax,bool debug_display, Mat &disp);函数为立体匹配方法。
结口的6个参数：分别为 
img11： 输入左图
img22:  输入右图
DMax：最大视差搜索范围
path ：动态规划路径：一般填写4 ，可选择1,2,4,5,8共五种路径
debug_display：bool型变量，是否要显示和保存立体匹配后的图像：若为true：函数执行完会显示视差图结果和自动保存（保存地址为工程地址）。
disp：输出视差信息，其内元素为float类型。

使用见main例程：

注意：如果函数在执行过程中报内存错误：有可能是输入图像太大或者DMax过大，试着调小一下图片分辨率或DMax试试。