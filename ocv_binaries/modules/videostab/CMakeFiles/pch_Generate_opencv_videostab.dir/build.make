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

# Utility rule file for pch_Generate_opencv_videostab.

# Include the progress variables for this target.
include modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/progress.make

modules/videostab/CMakeFiles/pch_Generate_opencv_videostab: modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch

modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch: /home/aaron/cellmate/opencv/modules/videostab/src/precomp.hpp
modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch: modules/videostab/precomp.hpp
modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch: lib/libopencv_videostab_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_videostab_Release.gch"
	cd /home/aaron/cellmate/ocv_binaries/modules/videostab && /usr/bin/cmake -E make_directory /home/aaron/cellmate/ocv_binaries/modules/videostab/precomp.hpp.gch
	cd /home/aaron/cellmate/ocv_binaries/modules/videostab && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -fPIC -DOPENCV_NOSTL -I"/home/aaron/cellmate/opencv/modules/photo/include" -I"/home/aaron/cellmate/opencv/modules/cudaoptflow/include" -I"/home/aaron/cellmate/opencv/modules/legacy/include" -I"/home/aaron/cellmate/opencv/modules/video/include" -I"/home/aaron/cellmate/opencv/modules/cudaimgproc/include" -I"/home/aaron/cellmate/opencv/modules/cudafilters/include" -I"/home/aaron/cellmate/opencv/modules/cuda/include" -I"/home/aaron/cellmate/opencv/modules/objdetect/include" -I"/home/aaron/cellmate/opencv/modules/ml/include" -I"/home/aaron/cellmate/opencv/modules/cudawarping/include" -I"/home/aaron/cellmate/opencv/modules/cudaarithm/include" -I"/home/aaron/cellmate/opencv/modules/calib3d/include" -I"/home/aaron/cellmate/opencv/modules/features2d/include" -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/flann/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/videostab" -I"/home/aaron/cellmate/opencv/modules/videostab/src" -I"/home/aaron/cellmate/opencv/modules/videostab/include" -isystem"/home/aaron/cellmate/ocv_binaries" -D__OPENCV_BUILD=1 -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -DCVAPI_EXPORTS -x c++-header -o /home/aaron/cellmate/ocv_binaries/modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch /home/aaron/cellmate/ocv_binaries/modules/videostab/precomp.hpp

modules/videostab/precomp.hpp: /home/aaron/cellmate/opencv/modules/videostab/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/aaron/cellmate/ocv_binaries/modules/videostab && /usr/bin/cmake -E copy /home/aaron/cellmate/opencv/modules/videostab/src/precomp.hpp /home/aaron/cellmate/ocv_binaries/modules/videostab/precomp.hpp

pch_Generate_opencv_videostab: modules/videostab/CMakeFiles/pch_Generate_opencv_videostab
pch_Generate_opencv_videostab: modules/videostab/precomp.hpp.gch/opencv_videostab_Release.gch
pch_Generate_opencv_videostab: modules/videostab/precomp.hpp
pch_Generate_opencv_videostab: modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/build.make
.PHONY : pch_Generate_opencv_videostab

# Rule to build all files generated by this target.
modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/build: pch_Generate_opencv_videostab
.PHONY : modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/build

modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/videostab && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_videostab.dir/cmake_clean.cmake
.PHONY : modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/clean

modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/videostab /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/videostab /home/aaron/cellmate/ocv_binaries/modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/videostab/CMakeFiles/pch_Generate_opencv_videostab.dir/depend

