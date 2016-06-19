// @author: lixihua9@126.com
// @date:   2016/06/19
// @brief:  LPL and LPR

#ifndef Plate_h
#define Plate_h

#include <cv.h>
#include <highgui.h>
#include <cvaux.h>

#include <string.h>
#include <vector>

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
