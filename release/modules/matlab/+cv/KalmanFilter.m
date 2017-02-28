% KALMANFILTER
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright 2017 The OpenCV Foundation
classdef KalmanFilter < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = KalmanFilter(varargin)
      this.ptr_ = KalmanFilterBridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      KalmanFilterBridge(this.ptr_, 'delete');
    end

  end
end