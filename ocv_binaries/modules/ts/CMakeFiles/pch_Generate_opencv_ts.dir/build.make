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

# Utility rule file for pch_Generate_opencv_ts.

# Include the progress variables for this target.
include modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/progress.make

modules/ts/CMakeFiles/pch_Generate_opencv_ts: modules/ts/precomp.hpp.gch/opencv_ts_Release.gch

modules/ts/precomp.hpp.gch/opencv_ts_Release.gch: /home/aaron/cellmate/opencv/modules/ts/src/precomp.hpp
modules/ts/precomp.hpp.gch/opencv_ts_Release.gch: modules/ts/precomp.hpp
modules/ts/precomp.hpp.gch/opencv_ts_Release.gch: lib/libopencv_ts_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_ts_Release.gch"
	cd /home/aaron/cellmate/ocv_binaries/modules/ts && /usr/bin/cmake -E make_directory /home/aaron/cellmate/ocv_binaries/modules/ts/precomp.hpp.gch
	cd /home/aaron/cellmate/ocv_binaries/modules/ts && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG -I"/home/aaron/cellmate/opencv/modules/highgui/include" -I"/home/aaron/cellmate/opencv/modules/imgproc/include" -I"/home/aaron/cellmate/opencv/modules/core/include" -isystem"/home/aaron/cellmate/ocv_binaries/modules/ts" -I"/home/aaron/cellmate/opencv/modules/ts/src" -I"/home/aaron/cellmate/opencv/modules/ts/include" -isystem"/home/aaron/cellmate/ocv_binaries" -D__OPENCV_BUILD=1 -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wno-narrowing -Wno-delete-non-virtual-dtor -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -msse -msse2 -msse3 -ffunction-sections -fvisibility=hidden -fvisibility-inlines-hidden -Wno-undef -x c++-header -o /home/aaron/cellmate/ocv_binaries/modules/ts/precomp.hpp.gch/opencv_ts_Release.gch /home/aaron/cellmate/ocv_binaries/modules/ts/precomp.hpp

modules/ts/precomp.hpp: /home/aaron/cellmate/opencv/modules/ts/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/aaron/cellmate/ocv_binaries/modules/ts && /usr/bin/cmake -E copy /home/aaron/cellmate/opencv/modules/ts/src/precomp.hpp /home/aaron/cellmate/ocv_binaries/modules/ts/precomp.hpp

pch_Generate_opencv_ts: modules/ts/CMakeFiles/pch_Generate_opencv_ts
pch_Generate_opencv_ts: modules/ts/precomp.hpp.gch/opencv_ts_Release.gch
pch_Generate_opencv_ts: modules/ts/precomp.hpp
pch_Generate_opencv_ts: modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build.make
.PHONY : pch_Generate_opencv_ts

# Rule to build all files generated by this target.
modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build: pch_Generate_opencv_ts
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build

modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/ts && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_ts.dir/cmake_clean.cmake
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/clean

modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/ts /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/ts /home/aaron/cellmate/ocv_binaries/modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/depend

