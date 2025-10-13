#include <iostream>
#include <opencv2/opencv.hpp>

int main(int, char **)
{
    cv::Mat image;
    cv::Vec3b val; // alias para o gabarito: Vec<uchar, 3> (estrutura vetorial que guarda 3 unsigned char)

    cv::namedWindow("janela", cv::WINDOW_AUTOSIZE);

    // Pintar em preto alguns pixels
    image = cv::imread("bolhas.png", cv::IMREAD_GRAYSCALE);
    if (!image.data)
        std::cout << "nao abriu bolhas.png" << std::endl;

    for (int i = 200; i < 210; i++)
    {
        for (int j = 10; j < 200; j++)
        {
            image.at<uchar>(i, j) = 0; // atualizar o pixel como um zero binário (preto) - por isso, usar unsigned char
        }
    }

    cv::imshow("janela", image);
    cv::waitKey();

    // Pintar em vermelho alguns pixels
    image = cv::imread("bolhas.png", cv::IMREAD_COLOR);

    // No OpenCV a ordem dos bytes de cores de um pixel é a BGR
    val[0] = 0;   // Blue
    val[1] = 0;   // Green
    val[2] = 255; // Red

    for (int i = 200; i < 210; i++)
    {
        for (int j = 10; j < 200; j++)
        {
            image.at<cv::Vec3b>(i, j) = val; // atualizar o pixel como um vetor [0,0,255] - por isso, usar Vec3b
        }
    }

    cv::imshow("janela", image);
    cv::waitKey();
    return 0;
}