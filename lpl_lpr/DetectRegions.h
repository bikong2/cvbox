// @author: lixihua9@126.com
// @date:   2016/06/19
// @brief:  LPL and LPR

#ifndef DetectRegions_h
#define DetectRegions_h

#include <cv.h>
#include <highgui.h>
#include <cvaux.h>

#include <string.h>
#include <vector>

#include "Plate.h"

using namespace std;
using namespace cv;

class DetectRegions{
    public:
        DetectRegions();
        string filename;
        void setFilename(string f);
        bool saveRegions;
        bool showSteps;
        vector<Plate> run(Mat input);
    private:
        vector<Plate> segment(Mat input);
        bool verifySizes(RotatedRect mr);
        Mat histeq(Mat in);
};

#endif
