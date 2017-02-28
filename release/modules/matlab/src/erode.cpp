/*
 * file:   erode.cpp
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
#include <opencv2/imgproc.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

/*
 * erode
 * void erode(Mat src, Mat dst, Mat kernel, Point anchor=Point(-1,-1), int iterations=1, int borderType=BORDER_CONSTANT, Scalar borderValue=morphologyDefaultBorderValue());
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("erode");
  parser.addVariant("erode", 2, 4, "anchor", "iterations", "borderType", "borderValue");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(1);

  
  // unpack the arguments
  Mat src = inputs[0].toMat();
  Mat kernel = inputs[1].toMat();
  Point anchor = inputs[2].empty() ? (Point) Point(-1,-1) : inputs[2].toPoint();
  int iterations = inputs[3].empty() ? (int) 1 : inputs[3].toInt();
  int borderType = inputs[4].empty() ? (int) BORDER_CONSTANT : inputs[4].toInt();
  Scalar borderValue = inputs[5].empty() ? (Scalar) morphologyDefaultBorderValue() : inputs[5].toScalar();
  Mat dst;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::erode(src, dst, kernel, anchor, iterations, borderType, borderValue);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in erode");
  }
  
  // assign the outputs into the bridge
  outputs[0] = dst;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}