#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv)
{
    cv::Mat image;
    char *p1x = argv[2];
    char *p1y = argv[3];
    char *p2x = argv[4];
    char *p2y = argv[5];

    cv::namedWindow("janela", cv::IMREAD_GRAYSCALE);
    image = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);

    cv::imshow("janela", image);
    cv::waitKey();

    return 0;
}