/*
 * file:   recoverPose.cpp
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
#include <opencv2/calib3d.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

/*
 * recoverPose
 * int recoverPose(Mat E, Mat points1, Mat points2, Mat R, Mat t, double focal=1.0, Point2d pp=Point2d(0, 0), Mat mask=Mat());
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("recoverPose");
  parser.addVariant("recoverPose", 3, 3, "focal", "pp", "mask");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(4);

  
  // unpack the arguments
  Mat E = inputs[0].toMat();
  Mat points1 = inputs[1].toMat();
  Mat points2 = inputs[2].toMat();
  double focal = inputs[3].empty() ? (double) 1.0 : inputs[3].toDouble();
  Point2d pp = inputs[4].empty() ? (Point2d) Point2d(0, 0) : inputs[4].toPoint2d();
  Mat mask = inputs[5].empty() ? (Mat) Mat() : inputs[5].toMat();
  Mat R;
  Mat t;
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = cv::recoverPose(E, points1, points2, R, t, focal, pp, mask);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in recoverPose");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;
  outputs[1] = R;
  outputs[2] = t;
  outputs[3] = mask;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}