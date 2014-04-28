# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aaron/cellmate/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron/cellmate/ocv_binaries

# Utility rule file for pch_Generate_opencv_test_cudafeatures2d.

# Include the progress variables for this target.
include modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/progress.make

modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d: modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch

modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch: /home/aaron/cellmate/opencv/modules/cudafeatures2d/test/test_precomp.hpp
modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch: modules/cudafeatures2d/test_precomp.hpp
modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch: lib/libopencv_test_cudafeatures2d_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d && /usr/bin/cmake -E make_directory /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d/test_precomp.hpp.gch
	cd /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/test" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/ts/include" -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/include" -I"/home/aaron/cellmate/opencv/modules/features2d/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/flann/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/cudafilters/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/cudaarithm/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d" -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/src" -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/include" -I"/home/aaron/cellmate/opencv/modules/features2d/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/flann/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/cudafilters/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/cudaarithm/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d" -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/src" -I"/home/aaron/cellmate/opencv/modules/cudafeatures2d/include" -isystem"/home/aaron/cellmate/ocv_binaries" -D__OPENCV_BUILD=1 -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Winit-self -Wpointer-arith -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wno-undef -Wno-missing-declarations -Wno-shadow -Wno-unused-parameter -x c++-header -o /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d/test_precomp.hpp

modules/cudafeatures2d/test_precomp.hpp: /home/aaron/cellmate/opencv/modules/cudafeatures2d/test/test_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d && /usr/bin/cmake -E copy /home/aaron/cellmate/opencv/modules/cudafeatures2d/test/test_precomp.hpp /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d/test_precomp.hpp

pch_Generate_opencv_test_cudafeatures2d: modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d
pch_Generate_opencv_test_cudafeatures2d: modules/cudafeatures2d/test_precomp.hpp.gch/opencv_test_cudafeatures2d_Release.gch
pch_Generate_opencv_test_cudafeatures2d: modules/cudafeatures2d/test_precomp.hpp
pch_Generate_opencv_test_cudafeatures2d: modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/build.make
.PHONY : pch_Generate_opencv_test_cudafeatures2d

# Rule to build all files generated by this target.
modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/build: pch_Generate_opencv_test_cudafeatures2d
.PHONY : modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/build

modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/cmake_clean.cmake
.PHONY : modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/clean

modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/cudafeatures2d /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d /home/aaron/cellmate/ocv_binaries/modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/cudafeatures2d/CMakeFiles/pch_Generate_opencv_test_cudafeatures2d.dir/depend

