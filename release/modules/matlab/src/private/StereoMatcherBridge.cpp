/*
 * file:   StereoMatcherBridge.cpp
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

typedef std::vector<Bridge> (*)(StereoMatcher&, const std::vector<Bridge>&) MethodSignature;


// wrapper for compute() method
std::vector<Bridge> compute(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat left = inputs[0].toMat();
  Mat right = inputs[1].toMat();
  Mat disparity;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.compute(left, right, disparity);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in compute");
  }
  
  // assign the outputs into the bridge
  outputs[0] = disparity;

  return outputs;
}

// wrapper for getMinDisparity() method
std::vector<Bridge> getMinDisparity(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getMinDisparity();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getMinDisparity");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setMinDisparity() method
std::vector<Bridge> setMinDisparity(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int minDisparity = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setMinDisparity(minDisparity);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setMinDisparity");
  }
  

  return outputs;
}

// wrapper for getNumDisparities() method
std::vector<Bridge> getNumDisparities(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getNumDisparities();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getNumDisparities");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setNumDisparities() method
std::vector<Bridge> setNumDisparities(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int numDisparities = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setNumDisparities(numDisparities);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setNumDisparities");
  }
  

  return outputs;
}

// wrapper for getBlockSize() method
std::vector<Bridge> getBlockSize(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getBlockSize();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getBlockSize");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setBlockSize() method
std::vector<Bridge> setBlockSize(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int blockSize = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setBlockSize(blockSize);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setBlockSize");
  }
  

  return outputs;
}

// wrapper for getSpeckleWindowSize() method
std::vector<Bridge> getSpeckleWindowSize(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getSpeckleWindowSize();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getSpeckleWindowSize");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setSpeckleWindowSize() method
std::vector<Bridge> setSpeckleWindowSize(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int speckleWindowSize = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setSpeckleWindowSize(speckleWindowSize);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setSpeckleWindowSize");
  }
  

  return outputs;
}

// wrapper for getSpeckleRange() method
std::vector<Bridge> getSpeckleRange(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getSpeckleRange();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getSpeckleRange");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setSpeckleRange() method
std::vector<Bridge> setSpeckleRange(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int speckleRange = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setSpeckleRange(speckleRange);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setSpeckleRange");
  }
  

  return outputs;
}

// wrapper for getDisp12MaxDiff() method
std::vector<Bridge> getDisp12MaxDiff(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDisp12MaxDiff();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDisp12MaxDiff");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setDisp12MaxDiff() method
std::vector<Bridge> setDisp12MaxDiff(StereoMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int disp12MaxDiff = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setDisp12MaxDiff(disp12MaxDiff);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setDisp12MaxDiff");
  }
  

  return outputs;
}

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["compute"] = &compute;
  m["getMinDisparity"] = &getMinDisparity;
  m["setMinDisparity"] = &setMinDisparity;
  m["getNumDisparities"] = &getNumDisparities;
  m["setNumDisparities"] = &setNumDisparities;
  m["getBlockSize"] = &getBlockSize;
  m["setBlockSize"] = &setBlockSize;
  m["getSpeckleWindowSize"] = &getSpeckleWindowSize;
  m["setSpeckleWindowSize"] = &setSpeckleWindowSize;
  m["getSpeckleRange"] = &getSpeckleRange;
  m["setSpeckleRange"] = &setSpeckleRange;
  m["getDisp12MaxDiff"] = &getDisp12MaxDiff;
  m["setDisp12MaxDiff"] = &setDisp12MaxDiff;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created StereoMatcher instances. Don't trust the user to keep them safe...
static Map<void *, StereoMatcher> instances;

/*
 * StereoMatcher
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
    StereoMatcher& inst = instances.at(handle.address());
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