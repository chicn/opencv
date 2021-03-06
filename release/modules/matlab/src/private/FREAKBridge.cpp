/*
 * file:   FREAKBridge.cpp
 * author: A trusty code generator
 * date:   Tue, 28 Feb 2017 10:45:57
 *
 * This file was autogenerated, do not modify.
 * See LICENSE for full modification and redistribution details.
 * Copyright 2017 The OpenCV Foundation
 */
#include <mex.h>
#include <vector>
#include <string>
#include <opencv2/matlab/map.hpp>
#include <opencv2/matlab/bridge.hpp>
#include <opencv2/core.hpp>
using namespace cv;
using namespace matlab;
using namespace bridge;

namespace {

typedef std::vector<Bridge> (*)(FREAK&, const std::vector<Bridge>&) MethodSignature;


// wrapper for create() method
std::vector<Bridge> create(FREAK& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  bool orientationNormalized = inputs[0].empty() ? (bool) true : inputs[0].toBool();
  bool scaleNormalized = inputs[1].empty() ? (bool) true : inputs[1].toBool();
  float patternScale = inputs[2].empty() ? (float) 22.0f : inputs[2].toFloat();
  int nOctaves = inputs[3].empty() ? (int) 4 : inputs[3].toInt();
  vector_int selectedPairs = inputs[4].empty() ? (vector_int) std::vector<int>() : inputs[4].toVectorInt();
  Ptr_FREAK retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.create(orientationNormalized, scaleNormalized, patternScale, nOctaves, selectedPairs);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in create");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["create"] = &create;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created FREAK instances. Don't trust the user to keep them safe...
static Map<void *, FREAK> instances;

/*
 * FREAK
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // parse the inputs
  Bridge method_name(prhs[0]);

  Bridge handle(prhs[1]);
  std::vector<Bridge> brhs(prhs+2, prhs+nrhs);

  // retrieve the instance of interest
  try {
    FREAK& inst = instances.at(handle.address());
  } catch (const std::out_of_range& e) {
    mexErrMsgTxt("Invalid object instance provided");
  }

  // invoke the correct method on the data
  try {
    std::vector<Bridge> blhs = (*methods.at(method_name))(inst, brhs);
  } catch (const std::out_of_range& e) {
    mexErrMsgTxt("Unknown method specified");
  }



}

} // end namespace