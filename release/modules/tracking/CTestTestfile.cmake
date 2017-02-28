# CMake generated Testfile for 
# Source directory: /Users/chihiro/Programs/opencv/opencv_contrib/modules/tracking
# Build directory: /Users/chihiro/Programs/opencv/opencv/release/modules/tracking
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_tracking "/Users/chihiro/Programs/opencv/opencv/release/bin/opencv_test_tracking" "--gtest_output=xml:opencv_test_tracking.xml")
set_tests_properties(opencv_test_tracking PROPERTIES  LABELS "Extra;opencv_tracking;Accuracy" WORKING_DIRECTORY "/Users/chihiro/Programs/opencv/opencv/release/test-reports/accuracy")
add_test(opencv_perf_tracking "/Users/chihiro/Programs/opencv/opencv/release/bin/opencv_perf_tracking" "--gtest_output=xml:opencv_perf_tracking.xml")
set_tests_properties(opencv_perf_tracking PROPERTIES  LABELS "Extra;opencv_tracking;Performance" WORKING_DIRECTORY "/Users/chihiro/Programs/opencv/opencv/release/test-reports/performance")
add_test(opencv_sanity_tracking "/Users/chihiro/Programs/opencv/opencv/release/bin/opencv_perf_tracking" "--gtest_output=xml:opencv_perf_tracking.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_tracking PROPERTIES  LABELS "Extra;opencv_tracking;Sanity" WORKING_DIRECTORY "/Users/chihiro/Programs/opencv/opencv/release/test-reports/sanity")
