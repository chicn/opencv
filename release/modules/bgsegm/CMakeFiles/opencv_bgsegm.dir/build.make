# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chihiro/Programs/opencv/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chihiro/Programs/opencv/opencv/release

# Include any dependencies generated for this target.
include modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/depend.make

# Include the progress variables for this target.
include modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/progress.make

# Include the compile flags for this target's objects.
include modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/flags.make

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/flags.make
modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gaussmix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gaussmix.cpp

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gaussmix.cpp > CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.i

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gaussmix.cpp -o CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.s

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.requires:

.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.requires

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.provides: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.requires
	$(MAKE) -f modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/build.make modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.provides.build
.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.provides

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.provides.build: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o


modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/flags.make
modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gmg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gmg.cpp

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gmg.cpp > CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.i

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm/src/bgfg_gmg.cpp -o CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.s

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.requires:

.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.requires

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.provides: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.requires
	$(MAKE) -f modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/build.make modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.provides.build
.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.provides

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.provides.build: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o


# Object files for target opencv_bgsegm
opencv_bgsegm_OBJECTS = \
"CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o" \
"CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o"

# External object files for target opencv_bgsegm
opencv_bgsegm_EXTERNAL_OBJECTS =

lib/libopencv_bgsegm.3.2.0.dylib: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o
lib/libopencv_bgsegm.3.2.0.dylib: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o
lib/libopencv_bgsegm.3.2.0.dylib: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/build.make
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_video.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_highgui.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: 3rdparty/ippicv/ippicv_osx/lib/libippicv.a
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_videoio.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_imgcodecs.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_imgproc.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: lib/libopencv_core.3.2.0.dylib
lib/libopencv_bgsegm.3.2.0.dylib: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libopencv_bgsegm.dylib"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_bgsegm.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libopencv_bgsegm.3.2.0.dylib ../../lib/libopencv_bgsegm.3.2.dylib ../../lib/libopencv_bgsegm.dylib

lib/libopencv_bgsegm.3.2.dylib: lib/libopencv_bgsegm.3.2.0.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_bgsegm.3.2.dylib

lib/libopencv_bgsegm.dylib: lib/libopencv_bgsegm.3.2.0.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_bgsegm.dylib

# Rule to build all files generated by this target.
modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/build: lib/libopencv_bgsegm.dylib

.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/build

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/requires: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gaussmix.cpp.o.requires
modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/requires: modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/src/bgfg_gmg.cpp.o.requires

.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/requires

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/clean:
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm && $(CMAKE_COMMAND) -P CMakeFiles/opencv_bgsegm.dir/cmake_clean.cmake
.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/clean

modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/depend:
	cd /Users/chihiro/Programs/opencv/opencv/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chihiro/Programs/opencv/opencv /Users/chihiro/Programs/opencv/opencv_contrib/modules/bgsegm /Users/chihiro/Programs/opencv/opencv/release /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm /Users/chihiro/Programs/opencv/opencv/release/modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/bgsegm/CMakeFiles/opencv_bgsegm.dir/depend

