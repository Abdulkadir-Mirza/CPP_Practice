# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/akm009/Desktop/AbstractFactoryMethodProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/akm009/Desktop/AbstractFactoryMethodProject/build

# Include any dependencies generated for this target.
include CMakeFiles/WindowsFamily.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WindowsFamily.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WindowsFamily.dir/flags.make

CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o: CMakeFiles/WindowsFamily.dir/flags.make
CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o: ../src/WindowsFamily.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o -c /home/akm009/Desktop/AbstractFactoryMethodProject/src/WindowsFamily.cpp

CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akm009/Desktop/AbstractFactoryMethodProject/src/WindowsFamily.cpp > CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.i

CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akm009/Desktop/AbstractFactoryMethodProject/src/WindowsFamily.cpp -o CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.s

# Object files for target WindowsFamily
WindowsFamily_OBJECTS = \
"CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o"

# External object files for target WindowsFamily
WindowsFamily_EXTERNAL_OBJECTS =

libWindowsFamily.a: CMakeFiles/WindowsFamily.dir/src/WindowsFamily.cpp.o
libWindowsFamily.a: CMakeFiles/WindowsFamily.dir/build.make
libWindowsFamily.a: CMakeFiles/WindowsFamily.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libWindowsFamily.a"
	$(CMAKE_COMMAND) -P CMakeFiles/WindowsFamily.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WindowsFamily.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WindowsFamily.dir/build: libWindowsFamily.a

.PHONY : CMakeFiles/WindowsFamily.dir/build

CMakeFiles/WindowsFamily.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WindowsFamily.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WindowsFamily.dir/clean

CMakeFiles/WindowsFamily.dir/depend:
	cd /home/akm009/Desktop/AbstractFactoryMethodProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/akm009/Desktop/AbstractFactoryMethodProject /home/akm009/Desktop/AbstractFactoryMethodProject /home/akm009/Desktop/AbstractFactoryMethodProject/build /home/akm009/Desktop/AbstractFactoryMethodProject/build /home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles/WindowsFamily.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WindowsFamily.dir/depend

