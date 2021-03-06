/*
 * file:   PCTSignaturesSQFDBridge.cpp
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

typedef std::vector<Bridge> (*)(PCTSignaturesSQFD&, const std::vector<Bridge>&) MethodSignature;


// wrapper for create() method
std::vector<Bridge> create(PCTSignaturesSQFD& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int distanceFunction = inputs[0].empty() ? (int) 3 : inputs[0].toInt();
  int similarityFunction = inputs[1].empty() ? (int) 2 : inputs[1].toInt();
  float similarityParameter = inputs[2].empty() ? (float) 1.0f : inputs[2].toFloat();
  Ptr_PCTSignaturesSQFD retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.create(distanceFunction, similarityFunction, similarityParameter);
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

// wrapper for computeQuadraticFormDistance() method
std::vector<Bridge> computeQuadraticFormDistance(PCTSignaturesSQFD& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat _signature0 = inputs[0].toMat();
  Mat _signature1 = inputs[1].toMat();
  float retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.computeQuadraticFormDistance(_signature0, _signature1);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in computeQuadraticFormDistance");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for computeQuadraticFormDistances() method
std::vector<Bridge> computeQuadraticFormDistances(PCTSignaturesSQFD& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  Mat sourceSignature = inputs[0].toMat();
  vector_Mat imageSignatures = inputs[1].toVectorMat();
  vector_float distances = inputs[2].toVectorFloat();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.computeQuadraticFormDistances(sourceSignature, imageSignatures, distances);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in computeQuadraticFormDistances");
  }
  

  return outputs;
}

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["create"] = &create;
  m["computeQuadraticFormDistance"] = &computeQuadraticFormDistance;
  m["computeQuadraticFormDistances"] = &computeQuadraticFormDistances;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created PCTSignaturesSQFD instances. Don't trust the user to keep them safe...
static Map<void *, PCTSignaturesSQFD> instances;

/*
 * PCTSignaturesSQFD
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
    PCTSignaturesSQFD& inst = instances.at(handle.address());
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