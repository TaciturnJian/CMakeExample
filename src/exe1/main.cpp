#include <iostream>
#include <opencv2/opencv.hpp>
#include "lib1.h"
#include "lib2.h"

using namespace std;
using namespace cv;

int main() {
	cout << "Hello 1" << endl;
	cout << s_add(s_sub(3, 4), 2) << endl;
	Mat m = Mat::zeros(400, 400, CV_8UC3);

	imshow("hello", m);
	waitKey(0);

	return 0;
}

