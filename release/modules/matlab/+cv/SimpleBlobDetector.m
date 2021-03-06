% SIMPLEBLOBDETECTOR
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright 2017 The OpenCV Foundation
classdef SimpleBlobDetector < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = SimpleBlobDetector(varargin)
      this.ptr_ = SimpleBlobDetectorBridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      SimpleBlobDetectorBridge(this.ptr_, 'delete');
    end

  end
end