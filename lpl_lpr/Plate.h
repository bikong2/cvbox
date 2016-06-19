// @author: lixihua9@126.com
// @date:   2016/06/19
// @brief:  LPL and LPR

#ifndef Plate_h
#define Plate_h

#include <string.h>
#include <vector>

#include <cv.h>
#include <highgui.h>
#include <cvaux.h>

using namespace std;
using namespace cv;

class Plate{
    public:
        Plate();
        Plate(Mat img, Rect pos);
        string str();
        Rect position;
        Mat plateImg;
        vector<char> chars;
        vector<Rect> charsPos;        
};

#endif
