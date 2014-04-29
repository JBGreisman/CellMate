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
include modules/highgui/CMakeFiles/opencv_perf_highgui.dir/depend.make

# Include the progress variables for this target.
include modules/highgui/CMakeFiles/opencv_perf_highgui.dir/progress.make

# Include the compile flags for this target's objects.
include modules/highgui/CMakeFiles/opencv_perf_highgui.dir/flags.make

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/flags.make
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o: /home/aaron/cellmate/opencv/modules/highgui/perf/perf_output.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o -c /home/aaron/cellmate/opencv/modules/highgui/perf/perf_output.cpp

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/highgui/perf/perf_output.cpp > CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.i

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/highgui/perf/perf_output.cpp -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.s

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.requires:
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.requires

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.provides: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.requires
	$(MAKE) -f modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build.make modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.provides.build
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.provides

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.provides.build: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/flags.make
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o: /home/aaron/cellmate/opencv/modules/highgui/perf/perf_main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o -c /home/aaron/cellmate/opencv/modules/highgui/perf/perf_main.cpp

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/highgui/perf/perf_main.cpp > CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.i

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/highgui/perf/perf_main.cpp -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.s

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.requires:
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.requires

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.provides: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.requires
	$(MAKE) -f modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build.make modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.provides.build
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.provides

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.provides.build: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/flags.make
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o: /home/aaron/cellmate/opencv/modules/highgui/perf/perf_input.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o -c /home/aaron/cellmate/opencv/modules/highgui/perf/perf_input.cpp

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/highgui/perf/perf_input.cpp > CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.i

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/highgui/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/highgui/perf/perf_input.cpp -o CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.s

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.requires:
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.requires

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.provides: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.requires
	$(MAKE) -f modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build.make modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.provides.build
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.provides

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.provides.build: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o

# Object files for target opencv_perf_highgui
opencv_perf_highgui_OBJECTS = \
"CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o" \
"CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o" \
"CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o"

# External object files for target opencv_perf_highgui
opencv_perf_highgui_EXTERNAL_OBJECTS =

bin/opencv_perf_highgui: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o
bin/opencv_perf_highgui: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o
bin/opencv_perf_highgui: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o
bin/opencv_perf_highgui: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build.make
bin/opencv_perf_highgui: lib/libopencv_core.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_ts.a
bin/opencv_perf_highgui: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_core.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_highgui: lib/libopencv_core.so.3.0.0
bin/opencv_perf_highgui: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/opencv_perf_highgui"
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_perf_highgui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build: bin/opencv_perf_highgui
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/build

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/requires: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_output.cpp.o.requires
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/requires: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_main.cpp.o.requires
modules/highgui/CMakeFiles/opencv_perf_highgui.dir/requires: modules/highgui/CMakeFiles/opencv_perf_highgui.dir/perf/perf_input.cpp.o.requires
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/requires

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/highgui && $(CMAKE_COMMAND) -P CMakeFiles/opencv_perf_highgui.dir/cmake_clean.cmake
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/clean

modules/highgui/CMakeFiles/opencv_perf_highgui.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/highgui /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/highgui /home/aaron/cellmate/ocv_binaries/modules/highgui/CMakeFiles/opencv_perf_highgui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/highgui/CMakeFiles/opencv_perf_highgui.dir/depend

