#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
    Mat img = imread("/home/jason/Downloads/submerged_desktop_thumb.jpg");
    if (!img.data) {
        cout << "Could not read or find the image" << endl;
        return -1;
    }
    Mat gray;
    cvtColor(img, gray, cv::COLOR_BGRA2GRAY);
    namedWindow("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", img);
    namedWindow("Result window", WINDOW_AUTOSIZE);
    imshow("Result window", gray);
    waitKey(0);
    return 0;
}