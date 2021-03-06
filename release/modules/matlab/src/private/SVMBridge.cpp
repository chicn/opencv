/*
 * file:   SVMBridge.cpp
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

typedef std::vector<Bridge> (*)(SVM&, const std::vector<Bridge>&) MethodSignature;


// wrapper for getType() method
std::vector<Bridge> getType(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getType();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getType");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setType() method
std::vector<Bridge> setType(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int val = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setType(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setType");
  }
  

  return outputs;
}

// wrapper for getGamma() method
std::vector<Bridge> getGamma(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getGamma();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getGamma");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setGamma() method
std::vector<Bridge> setGamma(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setGamma(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setGamma");
  }
  

  return outputs;
}

// wrapper for getCoef0() method
std::vector<Bridge> getCoef0(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getCoef0();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getCoef0");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setCoef0() method
std::vector<Bridge> setCoef0(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setCoef0(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setCoef0");
  }
  

  return outputs;
}

// wrapper for getDegree() method
std::vector<Bridge> getDegree(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDegree();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDegree");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setDegree() method
std::vector<Bridge> setDegree(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setDegree(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setDegree");
  }
  

  return outputs;
}

// wrapper for getC() method
std::vector<Bridge> getC(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getC();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getC");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setC() method
std::vector<Bridge> setC(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setC(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setC");
  }
  

  return outputs;
}

// wrapper for getNu() method
std::vector<Bridge> getNu(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getNu();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getNu");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setNu() method
std::vector<Bridge> setNu(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setNu(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setNu");
  }
  

  return outputs;
}

// wrapper for getP() method
std::vector<Bridge> getP(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getP();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getP");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setP() method
std::vector<Bridge> setP(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  double val = inputs[0].toDouble();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setP(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setP");
  }
  

  return outputs;
}

// wrapper for getClassWeights() method
std::vector<Bridge> getClassWeights(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getClassWeights();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getClassWeights");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setClassWeights() method
std::vector<Bridge> setClassWeights(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  Mat val = inputs[0].toMat();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setClassWeights(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setClassWeights");
  }
  

  return outputs;
}

// wrapper for getTermCriteria() method
std::vector<Bridge> getTermCriteria(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  TermCriteria retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getTermCriteria();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getTermCriteria");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setTermCriteria() method
std::vector<Bridge> setTermCriteria(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  TermCriteria val = inputs[0].toTermCriteria();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setTermCriteria(val);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setTermCriteria");
  }
  

  return outputs;
}

// wrapper for getKernelType() method
std::vector<Bridge> getKernelType(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  int retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getKernelType();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getKernelType");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for setKernel() method
std::vector<Bridge> setKernel(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs;
  
  // unpack the arguments
  int kernelType = inputs[0].toInt();

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    inst.setKernel(kernelType);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in setKernel");
  }
  

  return outputs;
}

// wrapper for getSupportVectors() method
std::vector<Bridge> getSupportVectors(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getSupportVectors();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getSupportVectors");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for getUncompressedSupportVectors() method
std::vector<Bridge> getUncompressedSupportVectors(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Mat retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getUncompressedSupportVectors();
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getUncompressedSupportVectors");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;

  return outputs;
}

// wrapper for getDecisionFunction() method
std::vector<Bridge> getDecisionFunction(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(3);
  
  // unpack the arguments
  int i = inputs[0].toInt();
  Mat alpha;
  Mat svidx;
  double retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.getDecisionFunction(i, alpha, svidx);
  } catch(cv::Exception& e) {
    error(std::string("cv::exception caught: ").append(e.what()).c_str());
  } catch(std::exception& e) {
    error(std::string("std::exception caught: ").append(e.what()).c_str());
  } catch(...) {
    error("Uncaught exception occurred in getDecisionFunction");
  }
  
  // assign the outputs into the bridge
  outputs[0] = retval;
  outputs[1] = alpha;
  outputs[2] = svidx;

  return outputs;
}

// wrapper for create() method
std::vector<Bridge> create(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  Ptr_SVM retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.create();
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

// wrapper for load() method
std::vector<Bridge> load(SVM& inst, const std::vector<Bridge>& inputs) {
  std::vector<Bridge> outputs(1);
  
  // unpack the arguments
  String filepath = inputs[0].toString();
  Ptr_SVM retval;

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    retval = inst.load(filepath);
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

Map<std::string, MethodSignature> createMethodMap() {
  Map<std::string, MethodSignature> m;
  m["getType"] = &getType;
  m["setType"] = &setType;
  m["getGamma"] = &getGamma;
  m["setGamma"] = &setGamma;
  m["getCoef0"] = &getCoef0;
  m["setCoef0"] = &setCoef0;
  m["getDegree"] = &getDegree;
  m["setDegree"] = &setDegree;
  m["getC"] = &getC;
  m["setC"] = &setC;
  m["getNu"] = &getNu;
  m["setNu"] = &setNu;
  m["getP"] = &getP;
  m["setP"] = &setP;
  m["getClassWeights"] = &getClassWeights;
  m["setClassWeights"] = &setClassWeights;
  m["getTermCriteria"] = &getTermCriteria;
  m["setTermCriteria"] = &setTermCriteria;
  m["getKernelType"] = &getKernelType;
  m["setKernel"] = &setKernel;
  m["getSupportVectors"] = &getSupportVectors;
  m["getUncompressedSupportVectors"] = &getUncompressedSupportVectors;
  m["getDecisionFunction"] = &getDecisionFunction;
  m["create"] = &create;
  m["load"] = &load;

  return m;
}
static const Map<std::string, MethodSignature> methods = createMethodMap();

// map of created SVM instances. Don't trust the user to keep them safe...
static Map<void *, SVM> instances;

/*
 * SVM
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
    SVM& inst = instances.at(handle.address());
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