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

# Utility rule file for pch_Generate_opencv_perf_cudawarping.

# Include the progress variables for this target.
include modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/progress.make

modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping: modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch

modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch: /home/aaron/cellmate/opencv/modules/cudawarping/perf/perf_precomp.hpp
modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch: modules/cudawarping/perf_precomp.hpp
modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch: lib/libopencv_perf_cudawarping_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudawarping && /usr/bin/cmake -E make_directory /home/aaron/cellmate/ocv_binaries/modules/cudawarping/perf_precomp.hpp.gch
	cd /home/aaron/cellmate/ocv_binaries/modules/cudawarping && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -I"/home/aaron/cellmate/opencv/modules/cudawarping/perf" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/ts/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/cudawarping" -I"/home/aaron/cellmate/opencv/modules/cudawarping/src" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/test" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/ts/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/cudawarping" -I"/home/aaron/cellmate/opencv/modules/cudawarping/src" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/cudawarping" -I"/home/aaron/cellmate/opencv/modules/cudawarping/src" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -isystem"/home/aaron/cellmate/ocv_binaries" -D__OPENCV_BUILD=1 -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wno-undef -Wno-missing-declarations -x c++-header -o /home/aaron/cellmate/ocv_binaries/modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch /home/aaron/cellmate/ocv_binaries/modules/cudawarping/perf_precomp.hpp

modules/cudawarping/perf_precomp.hpp: /home/aaron/cellmate/opencv/modules/cudawarping/perf/perf_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating perf_precomp.hpp"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudawarping && /usr/bin/cmake -E copy /home/aaron/cellmate/opencv/modules/cudawarping/perf/perf_precomp.hpp /home/aaron/cellmate/ocv_binaries/modules/cudawarping/perf_precomp.hpp

pch_Generate_opencv_perf_cudawarping: modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping
pch_Generate_opencv_perf_cudawarping: modules/cudawarping/perf_precomp.hpp.gch/opencv_perf_cudawarping_Release.gch
pch_Generate_opencv_perf_cudawarping: modules/cudawarping/perf_precomp.hpp
pch_Generate_opencv_perf_cudawarping: modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/build.make
.PHONY : pch_Generate_opencv_perf_cudawarping

# Rule to build all files generated by this target.
modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/build: pch_Generate_opencv_perf_cudawarping
.PHONY : modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/build

modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/cudawarping && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/cmake_clean.cmake
.PHONY : modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/clean

modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/cudawarping /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/cudawarping /home/aaron/cellmate/ocv_binaries/modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/cudawarping/CMakeFiles/pch_Generate_opencv_perf_cudawarping.dir/depend

