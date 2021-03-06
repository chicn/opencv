% HARRISLAPLACEFEATUREDETECTOR
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright 2017 The OpenCV Foundation
classdef HarrisLaplaceFeatureDetector < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = HarrisLaplaceFeatureDetector(varargin)
      this.ptr_ = HarrisLaplaceFeatureDetectorBridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      HarrisLaplaceFeatureDetectorBridge(this.ptr_, 'delete');
    end

  end
end