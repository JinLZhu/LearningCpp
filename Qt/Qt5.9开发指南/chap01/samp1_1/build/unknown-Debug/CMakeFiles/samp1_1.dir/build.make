# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug

# Include any dependencies generated for this target.
include CMakeFiles/samp1_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/samp1_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/samp1_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/samp1_1.dir/flags.make

samp1_1_autogen/timestamp: /usr/lib/qt6/moc
samp1_1_autogen/timestamp: /usr/lib/qt6/uic
samp1_1_autogen/timestamp: CMakeFiles/samp1_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target samp1_1"
	/usr/bin/cmake -E cmake_autogen /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles/samp1_1_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/samp1_1_autogen/timestamp

CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o: CMakeFiles/samp1_1.dir/flags.make
CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o: samp1_1_autogen/mocs_compilation.cpp
CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o: CMakeFiles/samp1_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o -MF CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o -c /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/samp1_1_autogen/mocs_compilation.cpp

CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/samp1_1_autogen/mocs_compilation.cpp > CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.i

CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/samp1_1_autogen/mocs_compilation.cpp -o CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.s

CMakeFiles/samp1_1.dir/main.cpp.o: CMakeFiles/samp1_1.dir/flags.make
CMakeFiles/samp1_1.dir/main.cpp.o: /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/main.cpp
CMakeFiles/samp1_1.dir/main.cpp.o: CMakeFiles/samp1_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/samp1_1.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/samp1_1.dir/main.cpp.o -MF CMakeFiles/samp1_1.dir/main.cpp.o.d -o CMakeFiles/samp1_1.dir/main.cpp.o -c /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/main.cpp

CMakeFiles/samp1_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/samp1_1.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/main.cpp > CMakeFiles/samp1_1.dir/main.cpp.i

CMakeFiles/samp1_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/samp1_1.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/main.cpp -o CMakeFiles/samp1_1.dir/main.cpp.s

CMakeFiles/samp1_1.dir/mainwindow.cpp.o: CMakeFiles/samp1_1.dir/flags.make
CMakeFiles/samp1_1.dir/mainwindow.cpp.o: /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/mainwindow.cpp
CMakeFiles/samp1_1.dir/mainwindow.cpp.o: CMakeFiles/samp1_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/samp1_1.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/samp1_1.dir/mainwindow.cpp.o -MF CMakeFiles/samp1_1.dir/mainwindow.cpp.o.d -o CMakeFiles/samp1_1.dir/mainwindow.cpp.o -c /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/mainwindow.cpp

CMakeFiles/samp1_1.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/samp1_1.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/mainwindow.cpp > CMakeFiles/samp1_1.dir/mainwindow.cpp.i

CMakeFiles/samp1_1.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/samp1_1.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/mainwindow.cpp -o CMakeFiles/samp1_1.dir/mainwindow.cpp.s

# Object files for target samp1_1
samp1_1_OBJECTS = \
"CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/samp1_1.dir/main.cpp.o" \
"CMakeFiles/samp1_1.dir/mainwindow.cpp.o"

# External object files for target samp1_1
samp1_1_EXTERNAL_OBJECTS =

samp1_1: CMakeFiles/samp1_1.dir/samp1_1_autogen/mocs_compilation.cpp.o
samp1_1: CMakeFiles/samp1_1.dir/main.cpp.o
samp1_1: CMakeFiles/samp1_1.dir/mainwindow.cpp.o
samp1_1: CMakeFiles/samp1_1.dir/build.make
samp1_1: /usr/lib/libQt6Widgets.so.6.7.0
samp1_1: /usr/lib/libQt6Gui.so.6.7.0
samp1_1: /usr/lib/libQt6Core.so.6.7.0
samp1_1: /usr/lib/libGLX.so
samp1_1: /usr/lib/libOpenGL.so
samp1_1: CMakeFiles/samp1_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable samp1_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/samp1_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/samp1_1.dir/build: samp1_1
.PHONY : CMakeFiles/samp1_1.dir/build

CMakeFiles/samp1_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/samp1_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/samp1_1.dir/clean

CMakeFiles/samp1_1.dir/depend: samp1_1_autogen/timestamp
	cd /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1 /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1 /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug /home/Jockey/code/LearningCpp/Qt/Qt5.9开发指南/chap01/samp1_1/build/unknown-Debug/CMakeFiles/samp1_1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/samp1_1.dir/depend

