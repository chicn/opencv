/*
 * file:   DescriptorMatcherBridge.cpp
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

typedef std::vector<Bridge> (*)(DescriptorMatcher&, const std::vector<Bridge>&) MethodSignature;


// wrapper for add() method
std::vector<Bridge> add(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  vector_Mat descriptors = inputs[0].toVectorMat();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.add(descriptors);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in add");
  }
  

  return outputs;
}

// wrapper for getTrainDescriptors() method
std::vector<Bridge> getTrainDescriptors(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  vector_Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getTrainDescriptors();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getTrainDescriptors");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for clear() method
std::vector<Bridge> clear(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.clear();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in clear");
  }
  

  return outputs;
}

// wrapper for empty() method
std::vector<Bridge> empty(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  bool retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.empty();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in empty");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for isMaskSupported() method
std::vector<Bridge> isMaskSupported(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  bool retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.isMaskSupported();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in isMaskSupported");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for train() method
std::vector<Bridge> train(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.train();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in train");
  }
  

  return outputs;
}

// wrapper for match() method
std::vector<Bridge> match(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  Mat trainDescriptors = inputs[1].toMat();
  Mat mask = inputs[2].empty() ? (Mat) Mat() : inputs[2].toMat();
  vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.match(queryDescriptors, trainDescriptors, matches, mask);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in match");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for knnMatch() method
std::vector<Bridge> knnMatch(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  Mat trainDescriptors = inputs[1].toMat();
  int k = inputs[2].toInt();
  Mat mask = inputs[3].empty() ? (Mat) Mat() : inputs[3].toMat();
  bool compactResult = inputs[4].empty() ? (bool) false : inputs[4].toBool();
  vector_vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in knnMatch");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for radiusMatch() method
std::vector<Bridge> radiusMatch(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  Mat trainDescriptors = inputs[1].toMat();
  float maxDistance = inputs[2].toFloat();
  Mat mask = inputs[3].empty() ? (Mat) Mat() : inputs[3].toMat();
  bool compactResult = inputs[4].empty() ? (bool) false : inputs[4].toBool();
  vector_vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in radiusMatch");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for match() method
std::vector<Bridge> match(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  vector_Mat masks = inputs[1].empty() ? (vector_Mat) vector_Mat() : inputs[1].toVectorMat();
  vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.match(queryDescriptors, matches, masks);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in match");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for knnMatch() method
std::vector<Bridge> knnMatch(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  int k = inputs[1].toInt();
  vector_Mat masks = inputs[2].empty() ? (vector_Mat) vector_Mat() : inputs[2].toVectorMat();
  bool compactResult = inputs[3].empty() ? (bool) false : inputs[3].toBool();
  vector_vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.knnMatch(queryDescriptors, matches, k, masks, compactResult);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in knnMatch");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for radiusMatch() method
std::vector<Bridge> radiusMatch(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat queryDescriptors = inputs[0].toMat();
  float maxDistance = inputs[1].toFloat();
  vector_Mat masks = inputs[2].empty() ? (vector_Mat) vector_Mat() : inputs[2].toVectorMat();
  bool compactResult = inputs[3].empty() ? (bool) false : inputs[3].toBool();
  vector_vector_DMatch matches;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in radiusMatch");
  }
  
  // assign the outputs into the bridge
  outputs[0] = matches;

  return outputs;
}

// wrapper for write() method
std::vector<Bridge> write(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  String fileName = inputs[0].toString();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.write(fileName);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in write");
  }
  

  return outputs;
}

// wrapper for read() method
std::vector<Bridge> read(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  String fileName = inputs[0].toString();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.read(fileName);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in read");
  }
  

  return outputs;
}

// wrapper for clone() method
std::vector<Bridge> clone(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  bool emptyTrainData = inputs[0].empty() ? (bool) false : inputs[0].toBool();
  Ptr_DescriptorMatcher retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.clone(emptyTrainData);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in clone");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for create() method
std::vector<Bridge> create(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  String descriptorMatcherType = inputs[0].toString();
  Ptr_DescriptorMatcher retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.create(descriptorMatcherType);
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

// wrapper for create() method
std::vector<Bridge> create(DescriptorMatcher& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int matcherType = inputs[0].toInt();
  Ptr_DescriptorMatcher retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.create(matcherType);
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
  m["add"] = &add;
  m["getTrainDescriptors"] = &getTrainDescriptors;
  m["clear"] = &clear;
  m["empty"] = &empty;
  m["isMaskSupported"] = &isMaskSupported;
  m["train"] = &train;
  m["match"] = &match;
  m["knnMatch"] = &knnMatch;
  m["radiusMatch"] = &radiusMatch;
  m["match"] = &match;
  m["knnMatch"] = &knnMatch;
  m["radiusMatch"] = &radiusMatch;
  m["write"] = &write;
  m["read"] = &read;
  m["clone"] = &clone;
  m["create"] = &create;
  m["create"] = &create;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created DescriptorMatcher instances. Don't trust the user to keep them safe...
static Map<void *, DescriptorMatcher> instances;

/*
 * DescriptorMatcher
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
    DescriptorMatcher& inst = instances.at(handle.address());
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