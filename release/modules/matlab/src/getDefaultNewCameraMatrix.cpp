/*
 * file:   getDefaultNewCameraMatrix.cpp
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
 * getDefaultNewCameraMatrix
 * Mat getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize=Size(), bool centerPrincipalPoint=false);
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("getDefaultNewCameraMatrix");
  parser.addVariant("getDefaultNewCameraMatrix", 1, 2, "imgsize", "centerPrincipalPoint");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(1);

  
  // unpack the arguments
  Mat cameraMatrix = inputs[0].toMat();
  Size imgsize = inputs[1].empty() ? (Size) Size() : inputs[1].toSize();
  bool centerPrincipalPoint = inputs[2].empty() ? (bool) false : inputs[2].toBool();
  Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = cv::getDefaultNewCameraMatrix(cameraMatrix, imgsize, centerPrincipalPoint);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDefaultNewCameraMatrix");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}