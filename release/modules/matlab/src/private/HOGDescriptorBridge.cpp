/*
 * file:   HOGDescriptorBridge.cpp
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

typedef std::vector<Bridge> (*)(HOGDescriptor&, const std::vector<Bridge>&) MethodSignature;


// wrapper for HOGDescriptor() constructor
HOGDescriptor HOGDescriptor(const std::vector<Bridge>& inputs) {
  

  HOGDescriptor obj = cv::HOGDescriptor();
  return obj;
}

// wrapper for HOGDescriptor() constructor
HOGDescriptor HOGDescriptor(const std::vector<Bridge>& inputs) {
  
  // unpack the arguments
  Size _winSize = inputs[0].toSize();
  Size _blockSize = inputs[1].toSize();
  Size _blockStride = inputs[2].toSize();
  Size _cellSize = inputs[3].toSize();
  int _nbins = inputs[4].toInt();
  int _derivAperture = inputs[5].empty() ? (int) 1 : inputs[5].toInt();
  double _winSigma = inputs[6].empty() ? (double) -1 : inputs[6].toDouble();
  int _histogramNormType = inputs[7].empty() ? (int) HOGDescriptor::L2Hys : inputs[7].toInt();
  double _L2HysThreshold = inputs[8].empty() ? (double) 0.2 : inputs[8].toDouble();
  bool _gammaCorrection = inputs[9].empty() ? (bool) false : inputs[9].toBool();
  int _nlevels = inputs[10].empty() ? (int) HOGDescriptor::DEFAULT_NLEVELS : inputs[10].toInt();
  bool _signedGradient = inputs[11].empty() ? (bool) false : inputs[11].toBool();

  HOGDescriptor obj = cv::HOGDescriptor(_winSize, _blockSize, _blockStride, _cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient);
  return obj;
}

// wrapper for HOGDescriptor() constructor
HOGDescriptor HOGDescriptor(const std::vector<Bridge>& inputs) {
  
  // unpack the arguments
  String filename = inputs[0].toString();

  HOGDescriptor obj = cv::HOGDescriptor(filename);
  return obj;
}

// wrapper for getDescriptorSize() method
std::vector<Bridge> getDescriptorSize(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  size_t retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDescriptorSize();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDescriptorSize");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for checkDetectorSize() method
std::vector<Bridge> checkDetectorSize(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  bool retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.checkDetectorSize();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in checkDetectorSize");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for getWinSigma() method
std::vector<Bridge> getWinSigma(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getWinSigma();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getWinSigma");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setSVMDetector() method
std::vector<Bridge> setSVMDetector(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  Mat _svmdetector = inputs[0].toMat();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setSVMDetector(_svmdetector);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setSVMDetector");
  }
  

  return outputs;
}

// wrapper for load() method
std::vector<Bridge> load(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  String filename = inputs[0].toString();
  String objname = inputs[1].empty() ? (String) String() : inputs[1].toString();
  bool retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.load(filename, objname);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in load");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for save() method
std::vector<Bridge> save(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  String filename = inputs[0].toString();
  String objname = inputs[1].empty() ? (String) String() : inputs[1].toString();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.save(filename, objname);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in save");
  }
  

  return outputs;
}

// wrapper for compute() method
std::vector<Bridge> compute(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat img = inputs[0].toMat();
  Size winStride = inputs[1].empty() ? (Size) Size() : inputs[1].toSize();
  Size padding = inputs[2].empty() ? (Size) Size() : inputs[2].toSize();
  vector_Point locations = inputs[3].empty() ? (vector_Point) std::vector<Point>() : inputs[3].toVectorPoint();
  vector_float descriptors;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.compute(img, descriptors, winStride, padding, locations);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in compute");
  }
  
  // assign the outputs into the bridge
  outputs[0] = descriptors;

  return outputs;
}

// wrapper for detect() method
std::vector<Bridge> detect(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(2);
  
  // unpack the arguments
  Mat img = inputs[0].toMat();
  double hitThreshold = inputs[1].empty() ? (double) 0 : inputs[1].toDouble();
  Size winStride = inputs[2].empty() ? (Size) Size() : inputs[2].toSize();
  Size padding = inputs[3].empty() ? (Size) Size() : inputs[3].toSize();
  vector_Point searchLocations = inputs[4].empty() ? (vector_Point) std::vector<Point>() : inputs[4].toVectorPoint();
  vector_Point foundLocations;
  vector_double weights;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in detect");
  }
  
  // assign the outputs into the bridge
  outputs[0] = foundLocations;
  outputs[1] = weights;

  return outputs;
}

// wrapper for detectMultiScale() method
std::vector<Bridge> detectMultiScale(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(2);
  
  // unpack the arguments
  Mat img = inputs[0].toMat();
  double hitThreshold = inputs[1].empty() ? (double) 0 : inputs[1].toDouble();
  Size winStride = inputs[2].empty() ? (Size) Size() : inputs[2].toSize();
  Size padding = inputs[3].empty() ? (Size) Size() : inputs[3].toSize();
  double scale = inputs[4].empty() ? (double) 1.05 : inputs[4].toDouble();
  double finalThreshold = inputs[5].empty() ? (double) 2.0 : inputs[5].toDouble();
  bool useMeanshiftGrouping = inputs[6].empty() ? (bool) false : inputs[6].toBool();
  vector_Rect foundLocations;
  vector_double foundWeights;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in detectMultiScale");
  }
  
  // assign the outputs into the bridge
  outputs[0] = foundLocations;
  outputs[1] = foundWeights;

  return outputs;
}

// wrapper for computeGradient() method
std::vector<Bridge> computeGradient(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(2);
  
  // unpack the arguments
  Mat img = inputs[0].toMat();
  Size paddingTL = inputs[1].empty() ? (Size) Size() : inputs[1].toSize();
  Size paddingBR = inputs[2].empty() ? (Size) Size() : inputs[2].toSize();
  Mat grad;
  Mat angleOfs;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.computeGradient(img, grad, angleOfs, paddingTL, paddingBR);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in computeGradient");
  }
  
  // assign the outputs into the bridge
  outputs[0] = grad;
  outputs[1] = angleOfs;

  return outputs;
}

// wrapper for getDefaultPeopleDetector() method
std::vector<Bridge> getDefaultPeopleDetector(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  vector_float retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDefaultPeopleDetector();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDefaultPeopleDetector");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for getDaimlerPeopleDetector() method
std::vector<Bridge> getDaimlerPeopleDetector(HOGDescriptor& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  vector_float retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDaimlerPeopleDetector();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDaimlerPeopleDetector");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["HOGDescriptor"] = &HOGDescriptor;
  m["HOGDescriptor"] = &HOGDescriptor;
  m["HOGDescriptor"] = &HOGDescriptor;
  m["getDescriptorSize"] = &getDescriptorSize;
  m["checkDetectorSize"] = &checkDetectorSize;
  m["getWinSigma"] = &getWinSigma;
  m["setSVMDetector"] = &setSVMDetector;
  m["load"] = &load;
  m["save"] = &save;
  m["compute"] = &compute;
  m["detect"] = &detect;
  m["detectMultiScale"] = &detectMultiScale;
  m["computeGradient"] = &computeGradient;
  m["getDefaultPeopleDetector"] = &getDefaultPeopleDetector;
  m["getDaimlerPeopleDetector"] = &getDaimlerPeopleDetector;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created HOGDescriptor instances. Don't trust the user to keep them safe...
static Map<void *, HOGDescriptor> instances;

/*
 * HOGDescriptor
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
    HOGDescriptor& inst = instances.at(handle.address());
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