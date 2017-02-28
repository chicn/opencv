/*
 * file:   setTrackbarMin.cpp
 * author: A trusty code generator
 * date:   Tue, 28 Feb 2017 10:45:57
 *
 * This file was autogenerated, do not modify.
 * See LICENSE for full modification and redistribution details.
 * Copyright 2017 The OpenCV Foundation
 */
#include <string>
#include <vector>
#include <cassert>
#include <exception>
#include <opencv2/matlab/bridge.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

/*
 * setTrackbarMin
 * void setTrackbarMin(String trackbarname, String winname, int minval);
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray**,
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("setTrackbarMin");
  parser.addVariant("setTrackbarMin", 3, 0);
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());

  
  // unpack the arguments
  String trackbarname = inputs[0].toString();
  String winname = inputs[1].toString();
  int minval = inputs[2].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::setTrackbarMin(trackbarname, winname, minval);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setTrackbarMin");
  }
  


}