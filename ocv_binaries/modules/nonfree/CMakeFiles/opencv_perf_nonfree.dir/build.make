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
include modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/depend.make

# Include the progress variables for this target.
include modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/progress.make

# Include the compile flags for this target's objects.
include modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/flags.make

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/flags.make
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o: /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cuda.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o -c /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cuda.cpp

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cuda.cpp > CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.i

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cuda.cpp -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.s

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.requires:
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.requires

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.provides: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.requires
	$(MAKE) -f modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build.make modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.provides.build
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.provides

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.provides.build: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/flags.make
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o: /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o -c /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cpp

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cpp > CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.i

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.cpp -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.s

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.requires:
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.requires

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.provides: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.requires
	$(MAKE) -f modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build.make modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.provides.build
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.provides

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.provides.build: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/flags.make
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o: /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o -c /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_main.cpp

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_main.cpp > CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.i

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_main.cpp -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.s

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.requires:
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.requires

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.provides: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.requires
	$(MAKE) -f modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build.make modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.provides.build
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.provides

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.provides.build: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/flags.make
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o: /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.ocl.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aaron/cellmate/ocv_binaries/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o -c /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.ocl.cpp

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.i"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -E /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.ocl.cpp > CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.i

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.s"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/aaron/cellmate/ocv_binaries/modules/nonfree/perf_precomp.hpp" -Winvalid-pch  -S /home/aaron/cellmate/opencv/modules/nonfree/perf/perf_surf.ocl.cpp -o CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.s

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.requires:
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.requires

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.provides: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.requires
	$(MAKE) -f modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build.make modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.provides.build
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.provides

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.provides.build: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o

# Object files for target opencv_perf_nonfree
opencv_perf_nonfree_OBJECTS = \
"CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o" \
"CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o" \
"CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o" \
"CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o"

# External object files for target opencv_perf_nonfree
opencv_perf_nonfree_EXTERNAL_OBJECTS =

bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o
bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o
bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o
bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o
bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build.make
bin/opencv_perf_nonfree: lib/libopencv_core.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_flann.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_features2d.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_calib3d.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_cudaarithm.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_nonfree.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_ts.a
bin/opencv_perf_nonfree: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_core.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_calib3d.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_features2d.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_flann.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_cudaarithm.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_highgui.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_imgproc.so.3.0.0
bin/opencv_perf_nonfree: lib/libopencv_core.so.3.0.0
bin/opencv_perf_nonfree: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/opencv_perf_nonfree"
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_perf_nonfree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build: bin/opencv_perf_nonfree
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/build

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/requires: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cuda.cpp.o.requires
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/requires: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.cpp.o.requires
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/requires: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_main.cpp.o.requires
modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/requires: modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/perf/perf_surf.ocl.cpp.o.requires
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/requires

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/clean:
	cd /home/aaron/cellmate/ocv_binaries/modules/nonfree && $(CMAKE_COMMAND) -P CMakeFiles/opencv_perf_nonfree.dir/cmake_clean.cmake
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/clean

modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/depend:
	cd /home/aaron/cellmate/ocv_binaries && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/cellmate/opencv /home/aaron/cellmate/opencv/modules/nonfree /home/aaron/cellmate/ocv_binaries /home/aaron/cellmate/ocv_binaries/modules/nonfree /home/aaron/cellmate/ocv_binaries/modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/nonfree/CMakeFiles/opencv_perf_nonfree.dir/depend

