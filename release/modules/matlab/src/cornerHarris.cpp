/*
 * file:   cornerHarris.cpp
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
 * cornerHarris
 * void cornerHarris(Mat src, Mat dst, int blockSize, int ksize, double k, int borderType=BORDER_DEFAULT);
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("cornerHarris");
  parser.addVariant("cornerHarris", 4, 1, "borderType");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(1);

  
  // unpack the arguments
  Mat src = inputs[0].toMat();
  int blockSize = inputs[1].toInt();
  int ksize = inputs[2].toInt();
  double k = inputs[3].toDouble();
  int borderType = inputs[4].empty() ? (int) BORDER_DEFAULT : inputs[4].toInt();
  Mat dst;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::cornerHarris(src, dst, blockSize, ksize, k, borderType);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in cornerHarris");
  }
  
  // assign the outputs into the bridge
  outputs[0] = dst;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}