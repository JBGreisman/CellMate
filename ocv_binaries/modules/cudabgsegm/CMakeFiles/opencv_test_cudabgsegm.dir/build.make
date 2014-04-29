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

# Include any dependencies generated for this target.
include modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/depend.make

# Include the progress variables for this target.
include modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/progress.make

# Include the compile flags for this target's objects.
include modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/flags.make

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/flags.make
modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o: /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_bgsegm.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o -c /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_bgsegm.cpp

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_bgsegm.cpp > CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.i

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_bgsegm.cpp -o CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.s

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.requires:
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.requires

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.provides: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.requires
	$(MAKE) -f modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/build.make modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.provides.build
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.provides

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.provides.build: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/flags.make
modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o: /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o -c /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_main.cpp

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_main.cpp > CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.i

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/test_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/cudabgsegm/test/test_main.cpp -o CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.s

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.requires:
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.requires

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.provides: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.requires
	$(MAKE) -f modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/build.make modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.provides.build
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.provides

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.provides.build: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o

# Object files for target opencv_test_cudabgsegm
opencv_test_cudabgsegm_OBJECTS = \
"CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o" \
"CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o"

# External object files for target opencv_test_cudabgsegm
opencv_test_cudabgsegm_EXTERNAL_OBJECTS =

bin/opencv_test_cudabgsegm: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o
bin/opencv_test_cudabgsegm: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o
bin/opencv_test_cudabgsegm: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/build.make
bin/opencv_test_cudabgsegm: lib/libopencv_core.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_flann.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_imgproc.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_highgui.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_features2d.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_calib3d.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudaarithm.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudafilters.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudaimgproc.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_ml.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_video.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_legacy.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudabgsegm.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_ts.a
bin/opencv_test_cudabgsegm: lib/libopencv_highgui.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_core.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_imgproc.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_highgui.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudaimgproc.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudafilters.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_cudaarithm.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_legacy.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_calib3d.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_features2d.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_flann.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_ml.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_video.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_highgui.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_imgproc.so.3.0.0
bin/opencv_test_cudabgsegm: lib/libopencv_core.so.3.0.0
bin/opencv_test_cudabgsegm: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/opencv_test_cudabgsegm"
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_test_cudabgsegm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/build: bin/opencv_test_cudabgsegm
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/build

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/requires: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_bgsegm.cpp.o.requires
modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/requires: modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/test/test_main.cpp.o.requires
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/requires

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm && $(CMAKE_COMMAND) -P CMakeFiles/opencv_test_cudabgsegm.dir/cmake_clean.cmake
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/clean

modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/cudabgsegm /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm /home/aaron/cellmate/ocv_binaries/modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/cudabgsegm/CMakeFiles/opencv_test_cudabgsegm.dir/depend

