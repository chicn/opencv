/*
 * file:   warpPerspective.cpp
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
 * warpPerspective
 * void warpPerspective(Mat src, Mat dst, Mat M, Size dsize, int flags=INTER_LINEAR, int borderMode=BORDER_CONSTANT, Scalar borderValue=Scalar());
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("warpPerspective");
  parser.addVariant("warpPerspective", 3, 3, "flags", "borderMode", "borderValue");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(1);

  
  // unpack the arguments
  Mat src = inputs[0].toMat();
  Mat M = inputs[1].toMat();
  Size dsize = inputs[2].toSize();
  int flags = inputs[3].empty() ? (int) INTER_LINEAR : inputs[3].toInt();
  int borderMode = inputs[4].empty() ? (int) BORDER_CONSTANT : inputs[4].toInt();
  Scalar borderValue = inputs[5].empty() ? (Scalar) Scalar() : inputs[5].toScalar();
  Mat dst;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::warpPerspective(src, dst, M, dsize, flags, borderMode, borderValue);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in warpPerspective");
  }
  
  // assign the outputs into the bridge
  outputs[0] = dst;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}