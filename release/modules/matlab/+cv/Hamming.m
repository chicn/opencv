% HAMMING
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright 2017 The OpenCV Foundation
classdef Hamming < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = Hamming(varargin)
      this.ptr_ = HammingBridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      HammingBridge(this.ptr_, 'delete');
    end

  end
end