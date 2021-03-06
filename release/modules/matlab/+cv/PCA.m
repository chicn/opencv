% PCA
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright 2017 The OpenCV Foundation
classdef PCA < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = PCA(varargin)
      this.ptr_ = PCABridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      PCABridge(this.ptr_, 'delete');
    end

  end
end