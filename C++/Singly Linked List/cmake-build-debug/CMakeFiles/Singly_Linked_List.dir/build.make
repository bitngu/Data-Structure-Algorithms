# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Singly_Linked_List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Singly_Linked_List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Singly_Linked_List.dir/flags.make

CMakeFiles/Singly_Linked_List.dir/main.cpp.o: CMakeFiles/Singly_Linked_List.dir/flags.make
CMakeFiles/Singly_Linked_List.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Singly_Linked_List.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Singly_Linked_List.dir/main.cpp.o -c "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/main.cpp"

CMakeFiles/Singly_Linked_List.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Singly_Linked_List.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/main.cpp" > CMakeFiles/Singly_Linked_List.dir/main.cpp.i

CMakeFiles/Singly_Linked_List.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Singly_Linked_List.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/main.cpp" -o CMakeFiles/Singly_Linked_List.dir/main.cpp.s

CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o: CMakeFiles/Singly_Linked_List.dir/flags.make
CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o: ../SinglyLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o -c "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/SinglyLinkedList.cpp"

CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/SinglyLinkedList.cpp" > CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.i

CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/SinglyLinkedList.cpp" -o CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.s

# Object files for target Singly_Linked_List
Singly_Linked_List_OBJECTS = \
"CMakeFiles/Singly_Linked_List.dir/main.cpp.o" \
"CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o"

# External object files for target Singly_Linked_List
Singly_Linked_List_EXTERNAL_OBJECTS =

Singly_Linked_List: CMakeFiles/Singly_Linked_List.dir/main.cpp.o
Singly_Linked_List: CMakeFiles/Singly_Linked_List.dir/SinglyLinkedList.cpp.o
Singly_Linked_List: CMakeFiles/Singly_Linked_List.dir/build.make
Singly_Linked_List: CMakeFiles/Singly_Linked_List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Singly_Linked_List"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Singly_Linked_List.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Singly_Linked_List.dir/build: Singly_Linked_List

.PHONY : CMakeFiles/Singly_Linked_List.dir/build

CMakeFiles/Singly_Linked_List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Singly_Linked_List.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Singly_Linked_List.dir/clean

CMakeFiles/Singly_Linked_List.dir/depend:
	cd "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List" "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List" "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug" "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug" "/Users/bitnguyen/Desktop/UCDavis/Fall 2020/ECS 36/Data Structure/Singly Linked List/cmake-build-debug/CMakeFiles/Singly_Linked_List.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Singly_Linked_List.dir/depend

