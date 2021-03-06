/*
 * file:   CalibrateRobertsonBridge.cpp
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

typedef std::vector<Bridge> (*)(CalibrateRobertson&, const std::vector<Bridge>&) MethodSignature;


// wrapper for getMaxIter() method
std::vector<Bridge> getMaxIter(CalibrateRobertson& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getMaxIter();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getMaxIter");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setMaxIter() method
std::vector<Bridge> setMaxIter(CalibrateRobertson& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int max_iter = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setMaxIter(max_iter);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setMaxIter");
  }
  

  return outputs;
}

// wrapper for getThreshold() method
std::vector<Bridge> getThreshold(CalibrateRobertson& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  float retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getThreshold();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getThreshold");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setThreshold() method
std::vector<Bridge> setThreshold(CalibrateRobertson& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  float threshold = inputs[0].toFloat();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setThreshold(threshold);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setThreshold");
  }
  

  return outputs;
}

// wrapper for getRadiance() method
std::vector<Bridge> getRadiance(CalibrateRobertson& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getRadiance();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getRadiance");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["getMaxIter"] = &getMaxIter;
  m["setMaxIter"] = &setMaxIter;
  m["getThreshold"] = &getThreshold;
  m["setThreshold"] = &setThreshold;
  m["getRadiance"] = &getRadiance;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created CalibrateRobertson instances. Don't trust the user to keep them safe...
static Map<void *, CalibrateRobertson> instances;

/*
 * CalibrateRobertson
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
    CalibrateRobertson& inst = instances.at(handle.address());
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