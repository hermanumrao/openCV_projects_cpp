#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <opencv2/core/mat.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <string>

using namespace std;
using namespace cv;

#include <iostream>

int main(int argc, char *argv[]) {
  string path = "/home/herman/workspace/openCV_projects/resources/b1.mp4";
  VideoCapture cap(path);
  Mat img;

  while (true) {
    cap.read(img);
    imshow("video", img);
    waitKey(10);
  }
  imshow("image", img);
  waitKey(0);
  return 0;
}
