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
include CMakeFiles/LinuxFamily.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinuxFamily.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinuxFamily.dir/flags.make

CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o: CMakeFiles/LinuxFamily.dir/flags.make
CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o: ../src/LinuxFamily.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o -c /home/akm009/Desktop/AbstractFactoryMethodProject/src/LinuxFamily.cpp

CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akm009/Desktop/AbstractFactoryMethodProject/src/LinuxFamily.cpp > CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.i

CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akm009/Desktop/AbstractFactoryMethodProject/src/LinuxFamily.cpp -o CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.s

# Object files for target LinuxFamily
LinuxFamily_OBJECTS = \
"CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o"

# External object files for target LinuxFamily
LinuxFamily_EXTERNAL_OBJECTS =

libLinuxFamily.a: CMakeFiles/LinuxFamily.dir/src/LinuxFamily.cpp.o
libLinuxFamily.a: CMakeFiles/LinuxFamily.dir/build.make
libLinuxFamily.a: CMakeFiles/LinuxFamily.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLinuxFamily.a"
	$(CMAKE_COMMAND) -P CMakeFiles/LinuxFamily.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinuxFamily.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinuxFamily.dir/build: libLinuxFamily.a

.PHONY : CMakeFiles/LinuxFamily.dir/build

CMakeFiles/LinuxFamily.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinuxFamily.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinuxFamily.dir/clean

CMakeFiles/LinuxFamily.dir/depend:
	cd /home/akm009/Desktop/AbstractFactoryMethodProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/akm009/Desktop/AbstractFactoryMethodProject /home/akm009/Desktop/AbstractFactoryMethodProject /home/akm009/Desktop/AbstractFactoryMethodProject/build /home/akm009/Desktop/AbstractFactoryMethodProject/build /home/akm009/Desktop/AbstractFactoryMethodProject/build/CMakeFiles/LinuxFamily.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinuxFamily.dir/depend
