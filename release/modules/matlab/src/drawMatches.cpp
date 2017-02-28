/*
 * file:   drawMatches.cpp
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
#include <opencv2/features2d.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

/*
 * drawMatches
 * void drawMatches(Mat img1, vector_KeyPoint keypoints1, Mat img2, vector_KeyPoint keypoints2, vector_vector_DMatch matches1to2, Mat outImg, Scalar matchColor=Scalar::all(-1), Scalar singlePointColor=Scalar::all(-1), vector_vector_char matchesMask=std::vector<std::vector<char> >(), int flags=DrawMatchesFlags::DEFAULT);
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  ArgumentParser parser("drawMatches");
  parser.addVariant("drawMatches", 6, 4, "matchColor", "singlePointColor", "matchesMask", "flags");
  MxArrayVector sorted = parser.parse(MxArrayVector(prhs, prhs+nrhs));

  // setup
  BridgeVector inputs(sorted.begin(), sorted.end());
  BridgeVector outputs(1);

  
  // unpack the arguments
  Mat img1 = inputs[0].toMat();
  vector_KeyPoint keypoints1 = inputs[1].toVectorKeyPoint();
  Mat img2 = inputs[2].toMat();
  vector_KeyPoint keypoints2 = inputs[3].toVectorKeyPoint();
  vector_vector_DMatch matches1to2 = inputs[4].toVectorVectorDMatch();
  Mat outImg = inputs[5].toMat();
  Scalar matchColor = inputs[6].empty() ? (Scalar) Scalar::all(-1) : inputs[6].toScalar();
  Scalar singlePointColor = inputs[7].empty() ? (Scalar) Scalar::all(-1) : inputs[7].toScalar();
  vector_vector_char matchesMask = inputs[8].empty() ? (vector_vector_char) std::vector<std::vector<char> >() : inputs[8].toVectorVectorChar();
  int flags = inputs[9].empty() ? (int) DrawMatchesFlags::DEFAULT : inputs[9].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    cv::drawMatches(img1, keypoints1, img2, keypoints2, matches1to2, outImg, matchColor, singlePointColor, matchesMask, flags);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in drawMatches");
  }
  
  // assign the outputs into the bridge
  outputs[0] = outImg;


  // push the outputs back to matlab
  for (size_t n = 0; n < static_cast<size_t>(std::max(nlhs,1)); ++n) {
    plhs[n] = outputs[n].toMxArray().releaseOwnership();
  }
}