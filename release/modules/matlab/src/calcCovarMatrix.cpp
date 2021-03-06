/*
 * file:   calcCovarMatrix.cpp
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
#include <opencv2/core.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

/*
 * calcCovarMatrix
 * void calcCovarMatrix(Mat samples, Mat covar, Mat mean, int flags, int ctype=CV_64F);
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("calcCovarMatrix");
  parser.addVariant("calcCovarMatrix", 3, 1, "ctype");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(2);

  
  // unpack the arguments
  Mat samples = inputs[0].toMat();
  Mat mean = inputs[1].toMat();
  int flags = inputs[2].toInt();
  int ctype = inputs[3].empty() ? (int) CV_64F : inputs[3].toInt();
  Mat covar;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::calcCovarMatrix(samples, covar, mean, flags, ctype);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in calcCovarMatrix");
  }
  
  // assign the outputs into the bridge
  outputs[0] = covar;
  outputs[1] = mean;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}