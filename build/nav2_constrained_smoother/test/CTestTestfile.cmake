# CMake generated Testfile for 
# Source directory: /home/ricardo/rm_ws/src/navigation2/nav2_constrained_smoother/test
# Build directory: /home/ricardo/rm_ws/build/nav2_constrained_smoother/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_constrained_smoother "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test_results/nav2_constrained_smoother/test_constrained_smoother.gtest.xml" "--package-name" "nav2_constrained_smoother" "--output-file" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/ament_cmake_gtest/test_constrained_smoother.txt" "--command" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test/test_constrained_smoother" "--gtest_output=xml:/home/ricardo/rm_ws/build/nav2_constrained_smoother/test_results/nav2_constrained_smoother/test_constrained_smoother.gtest.xml")
set_tests_properties(test_constrained_smoother PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test/test_constrained_smoother" TIMEOUT "60" WORKING_DIRECTORY "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ricardo/rm_ws/src/navigation2/nav2_constrained_smoother/test/CMakeLists.txt;1;ament_add_gtest;/home/ricardo/rm_ws/src/navigation2/nav2_constrained_smoother/test/CMakeLists.txt;0;")
add_test(test_smoother_cost_function "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test_results/nav2_constrained_smoother/test_smoother_cost_function.gtest.xml" "--package-name" "nav2_constrained_smoother" "--output-file" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/ament_cmake_gtest/test_smoother_cost_function.txt" "--command" "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test/test_smoother_cost_function" "--gtest_output=xml:/home/ricardo/rm_ws/build/nav2_constrained_smoother/test_results/nav2_constrained_smoother/test_smoother_cost_function.gtest.xml")
set_tests_properties(test_smoother_cost_function PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test/test_smoother_cost_function" TIMEOUT "60" WORKING_DIRECTORY "/home/ricardo/rm_ws/build/nav2_constrained_smoother/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ricardo/rm_ws/src/navigation2/nav2_constrained_smoother/test/CMakeLists.txt;12;ament_add_gtest;/home/ricardo/rm_ws/src/navigation2/nav2_constrained_smoother/test/CMakeLists.txt;0;")
subdirs("../gtest")
