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
include modules/optflow/CMakeFiles/opencv_perf_optflow.dir/depend.make

# Include the progress variables for this target.
include modules/optflow/CMakeFiles/opencv_perf_optflow.dir/progress.make

# Include the compile flags for this target's objects.
include modules/optflow/CMakeFiles/opencv_perf_optflow.dir/flags.make

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/flags.make
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_deepflow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_deepflow.cpp

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_deepflow.cpp > CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.i

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_deepflow.cpp -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.s

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.requires:

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.requires

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.provides: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.requires
	$(MAKE) -f modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build.make modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.provides.build
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.provides

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.provides.build: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o


modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/flags.make
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_disflow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_disflow.cpp

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_disflow.cpp > CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.i

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_disflow.cpp -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.s

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.requires:

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.requires

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.provides: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.requires
	$(MAKE) -f modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build.make modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.provides.build
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.provides

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.provides.build: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o


modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/flags.make
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_main.cpp

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_main.cpp > CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.i

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_main.cpp -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.s

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.requires:

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.requires

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.provides: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.requires
	$(MAKE) -f modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build.make modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.provides.build
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.provides

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.provides.build: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o


modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/flags.make
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o: /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_variational_refinement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o -c /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_variational_refinement.cpp

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.i"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_variational_refinement.cpp > CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.i

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.s"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow/perf/perf_variational_refinement.cpp -o CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.s

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.requires:

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.requires

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.provides: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.requires
	$(MAKE) -f modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build.make modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.provides.build
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.provides

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.provides.build: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o


# Object files for target opencv_perf_optflow
opencv_perf_optflow_OBJECTS = \
"CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o" \
"CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o" \
"CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o" \
"CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o"

# External object files for target opencv_perf_optflow
opencv_perf_optflow_EXTERNAL_OBJECTS =

bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o
bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o
bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o
bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o
bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build.make
bin/opencv_perf_optflow: lib/libopencv_ts.a
bin/opencv_perf_optflow: lib/libopencv_optflow.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_video.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_ximgproc.3.2.0.dylib
bin/opencv_perf_optflow: 3rdparty/ippicv/ippicv_osx/lib/libippicv.a
bin/opencv_perf_optflow: lib/libopencv_calib3d.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_features2d.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_flann.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_ml.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_highgui.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_videoio.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_imgcodecs.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_imgproc.3.2.0.dylib
bin/opencv_perf_optflow: lib/libopencv_core.3.2.0.dylib
bin/opencv_perf_optflow: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chihiro/Programs/opencv/opencv/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/opencv_perf_optflow"
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_perf_optflow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build: bin/opencv_perf_optflow

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/build

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/requires: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_deepflow.cpp.o.requires
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/requires: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_disflow.cpp.o.requires
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/requires: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_main.cpp.o.requires
modules/optflow/CMakeFiles/opencv_perf_optflow.dir/requires: modules/optflow/CMakeFiles/opencv_perf_optflow.dir/perf/perf_variational_refinement.cpp.o.requires

.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/requires

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/clean:
	cd /Users/chihiro/Programs/opencv/opencv/release/modules/optflow && $(CMAKE_COMMAND) -P CMakeFiles/opencv_perf_optflow.dir/cmake_clean.cmake
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/clean

modules/optflow/CMakeFiles/opencv_perf_optflow.dir/depend:
	cd /Users/chihiro/Programs/opencv/opencv/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chihiro/Programs/opencv/opencv /Users/chihiro/Programs/opencv/opencv_contrib/modules/optflow /Users/chihiro/Programs/opencv/opencv/release /Users/chihiro/Programs/opencv/opencv/release/modules/optflow /Users/chihiro/Programs/opencv/opencv/release/modules/optflow/CMakeFiles/opencv_perf_optflow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/optflow/CMakeFiles/opencv_perf_optflow.dir/depend

