# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/anton/cpp_files/lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/cpp_files/lab2

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anton/cpp_files/lab2/CMakeFiles /home/anton/cpp_files/lab2//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anton/cpp_files/lab2/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Main

# Build rule for target.
Main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Main
.PHONY : Main

# fast build rule for target.
Main/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/build
.PHONY : Main/fast

#=============================================================================
# Target rules for targets named VectorTest

# Build rule for target.
VectorTest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 VectorTest
.PHONY : VectorTest

# fast build rule for target.
VectorTest/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/build
.PHONY : VectorTest/fast

#=============================================================================
# Target rules for targets named LinkedListTest

# Build rule for target.
LinkedListTest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 LinkedListTest
.PHONY : LinkedListTest

# fast build rule for target.
LinkedListTest/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/build
.PHONY : LinkedListTest/fast

#=============================================================================
# Target rules for targets named ShellTest

# Build rule for target.
ShellTest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 ShellTest
.PHONY : ShellTest

# fast build rule for target.
ShellTest/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/build
.PHONY : ShellTest/fast

#=============================================================================
# Target rules for targets named PyramidicTest

# Build rule for target.
PyramidicTest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PyramidicTest
.PHONY : PyramidicTest

# fast build rule for target.
PyramidicTest/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/build
.PHONY : PyramidicTest/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/main.cpp.s
.PHONY : main.cpp.s

sources/LinkedList.o: sources/LinkedList.cpp.o
.PHONY : sources/LinkedList.o

# target to build an object file
sources/LinkedList.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/LinkedList.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/LinkedList.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/LinkedList.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/LinkedList.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/LinkedList.cpp.o
.PHONY : sources/LinkedList.cpp.o

sources/LinkedList.i: sources/LinkedList.cpp.i
.PHONY : sources/LinkedList.i

# target to preprocess a source file
sources/LinkedList.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/LinkedList.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/LinkedList.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/LinkedList.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/LinkedList.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/LinkedList.cpp.i
.PHONY : sources/LinkedList.cpp.i

sources/LinkedList.s: sources/LinkedList.cpp.s
.PHONY : sources/LinkedList.s

# target to generate assembly for a file
sources/LinkedList.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/LinkedList.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/LinkedList.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/LinkedList.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/LinkedList.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/LinkedList.cpp.s
.PHONY : sources/LinkedList.cpp.s

sources/PyramidicSort.o: sources/PyramidicSort.cpp.o
.PHONY : sources/PyramidicSort.o

# target to build an object file
sources/PyramidicSort.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/PyramidicSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/PyramidicSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/PyramidicSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/PyramidicSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/PyramidicSort.cpp.o
.PHONY : sources/PyramidicSort.cpp.o

sources/PyramidicSort.i: sources/PyramidicSort.cpp.i
.PHONY : sources/PyramidicSort.i

# target to preprocess a source file
sources/PyramidicSort.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/PyramidicSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/PyramidicSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/PyramidicSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/PyramidicSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/PyramidicSort.cpp.i
.PHONY : sources/PyramidicSort.cpp.i

sources/PyramidicSort.s: sources/PyramidicSort.cpp.s
.PHONY : sources/PyramidicSort.s

# target to generate assembly for a file
sources/PyramidicSort.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/PyramidicSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/PyramidicSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/PyramidicSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/PyramidicSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/PyramidicSort.cpp.s
.PHONY : sources/PyramidicSort.cpp.s

sources/ShellSort.o: sources/ShellSort.cpp.o
.PHONY : sources/ShellSort.o

# target to build an object file
sources/ShellSort.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/ShellSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/ShellSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/ShellSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/ShellSort.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/ShellSort.cpp.o
.PHONY : sources/ShellSort.cpp.o

sources/ShellSort.i: sources/ShellSort.cpp.i
.PHONY : sources/ShellSort.i

# target to preprocess a source file
sources/ShellSort.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/ShellSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/ShellSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/ShellSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/ShellSort.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/ShellSort.cpp.i
.PHONY : sources/ShellSort.cpp.i

sources/ShellSort.s: sources/ShellSort.cpp.s
.PHONY : sources/ShellSort.s

# target to generate assembly for a file
sources/ShellSort.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/ShellSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/ShellSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/ShellSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/ShellSort.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/ShellSort.cpp.s
.PHONY : sources/ShellSort.cpp.s

sources/TimeCompare.o: sources/TimeCompare.cpp.o
.PHONY : sources/TimeCompare.o

# target to build an object file
sources/TimeCompare.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/TimeCompare.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/TimeCompare.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/TimeCompare.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/TimeCompare.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/TimeCompare.cpp.o
.PHONY : sources/TimeCompare.cpp.o

sources/TimeCompare.i: sources/TimeCompare.cpp.i
.PHONY : sources/TimeCompare.i

# target to preprocess a source file
sources/TimeCompare.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/TimeCompare.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/TimeCompare.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/TimeCompare.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/TimeCompare.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/TimeCompare.cpp.i
.PHONY : sources/TimeCompare.cpp.i

sources/TimeCompare.s: sources/TimeCompare.cpp.s
.PHONY : sources/TimeCompare.s

# target to generate assembly for a file
sources/TimeCompare.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/TimeCompare.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/TimeCompare.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/TimeCompare.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/TimeCompare.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/TimeCompare.cpp.s
.PHONY : sources/TimeCompare.cpp.s

sources/Vector.o: sources/Vector.cpp.o
.PHONY : sources/Vector.o

# target to build an object file
sources/Vector.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/Vector.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/Vector.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/Vector.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/Vector.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/Vector.cpp.o
.PHONY : sources/Vector.cpp.o

sources/Vector.i: sources/Vector.cpp.i
.PHONY : sources/Vector.i

# target to preprocess a source file
sources/Vector.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/Vector.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/Vector.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/Vector.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/Vector.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/Vector.cpp.i
.PHONY : sources/Vector.cpp.i

sources/Vector.s: sources/Vector.cpp.s
.PHONY : sources/Vector.s

# target to generate assembly for a file
sources/Vector.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/Vector.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/Vector.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/Vector.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/Vector.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/Vector.cpp.s
.PHONY : sources/Vector.cpp.s

sources/operating.o: sources/operating.cpp.o
.PHONY : sources/operating.o

# target to build an object file
sources/operating.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/operating.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/operating.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/operating.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/operating.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/operating.cpp.o
.PHONY : sources/operating.cpp.o

sources/operating.i: sources/operating.cpp.i
.PHONY : sources/operating.i

# target to preprocess a source file
sources/operating.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/operating.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/operating.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/operating.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/operating.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/operating.cpp.i
.PHONY : sources/operating.cpp.i

sources/operating.s: sources/operating.cpp.s
.PHONY : sources/operating.s

# target to generate assembly for a file
sources/operating.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/sources/operating.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/sources/operating.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/sources/operating.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/sources/operating.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/sources/operating.cpp.s
.PHONY : sources/operating.cpp.s

tests/LinkedListTest.o: tests/LinkedListTest.cpp.o
.PHONY : tests/LinkedListTest.o

# target to build an object file
tests/LinkedListTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/tests/LinkedListTest.cpp.o
.PHONY : tests/LinkedListTest.cpp.o

tests/LinkedListTest.i: tests/LinkedListTest.cpp.i
.PHONY : tests/LinkedListTest.i

# target to preprocess a source file
tests/LinkedListTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/tests/LinkedListTest.cpp.i
.PHONY : tests/LinkedListTest.cpp.i

tests/LinkedListTest.s: tests/LinkedListTest.cpp.s
.PHONY : tests/LinkedListTest.s

# target to generate assembly for a file
tests/LinkedListTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/LinkedListTest.dir/build.make CMakeFiles/LinkedListTest.dir/tests/LinkedListTest.cpp.s
.PHONY : tests/LinkedListTest.cpp.s

tests/PyramidicTest.o: tests/PyramidicTest.cpp.o
.PHONY : tests/PyramidicTest.o

# target to build an object file
tests/PyramidicTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/tests/PyramidicTest.cpp.o
.PHONY : tests/PyramidicTest.cpp.o

tests/PyramidicTest.i: tests/PyramidicTest.cpp.i
.PHONY : tests/PyramidicTest.i

# target to preprocess a source file
tests/PyramidicTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/tests/PyramidicTest.cpp.i
.PHONY : tests/PyramidicTest.cpp.i

tests/PyramidicTest.s: tests/PyramidicTest.cpp.s
.PHONY : tests/PyramidicTest.s

# target to generate assembly for a file
tests/PyramidicTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PyramidicTest.dir/build.make CMakeFiles/PyramidicTest.dir/tests/PyramidicTest.cpp.s
.PHONY : tests/PyramidicTest.cpp.s

tests/ShellTest.o: tests/ShellTest.cpp.o
.PHONY : tests/ShellTest.o

# target to build an object file
tests/ShellTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/tests/ShellTest.cpp.o
.PHONY : tests/ShellTest.cpp.o

tests/ShellTest.i: tests/ShellTest.cpp.i
.PHONY : tests/ShellTest.i

# target to preprocess a source file
tests/ShellTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/tests/ShellTest.cpp.i
.PHONY : tests/ShellTest.cpp.i

tests/ShellTest.s: tests/ShellTest.cpp.s
.PHONY : tests/ShellTest.s

# target to generate assembly for a file
tests/ShellTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ShellTest.dir/build.make CMakeFiles/ShellTest.dir/tests/ShellTest.cpp.s
.PHONY : tests/ShellTest.cpp.s

tests/VectorTest.o: tests/VectorTest.cpp.o
.PHONY : tests/VectorTest.o

# target to build an object file
tests/VectorTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/tests/VectorTest.cpp.o
.PHONY : tests/VectorTest.cpp.o

tests/VectorTest.i: tests/VectorTest.cpp.i
.PHONY : tests/VectorTest.i

# target to preprocess a source file
tests/VectorTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/tests/VectorTest.cpp.i
.PHONY : tests/VectorTest.cpp.i

tests/VectorTest.s: tests/VectorTest.cpp.s
.PHONY : tests/VectorTest.s

# target to generate assembly for a file
tests/VectorTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/VectorTest.dir/build.make CMakeFiles/VectorTest.dir/tests/VectorTest.cpp.s
.PHONY : tests/VectorTest.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... LinkedListTest"
	@echo "... Main"
	@echo "... PyramidicTest"
	@echo "... ShellTest"
	@echo "... VectorTest"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... sources/LinkedList.o"
	@echo "... sources/LinkedList.i"
	@echo "... sources/LinkedList.s"
	@echo "... sources/PyramidicSort.o"
	@echo "... sources/PyramidicSort.i"
	@echo "... sources/PyramidicSort.s"
	@echo "... sources/ShellSort.o"
	@echo "... sources/ShellSort.i"
	@echo "... sources/ShellSort.s"
	@echo "... sources/TimeCompare.o"
	@echo "... sources/TimeCompare.i"
	@echo "... sources/TimeCompare.s"
	@echo "... sources/Vector.o"
	@echo "... sources/Vector.i"
	@echo "... sources/Vector.s"
	@echo "... sources/operating.o"
	@echo "... sources/operating.i"
	@echo "... sources/operating.s"
	@echo "... tests/LinkedListTest.o"
	@echo "... tests/LinkedListTest.i"
	@echo "... tests/LinkedListTest.s"
	@echo "... tests/PyramidicTest.o"
	@echo "... tests/PyramidicTest.i"
	@echo "... tests/PyramidicTest.s"
	@echo "... tests/ShellTest.o"
	@echo "... tests/ShellTest.i"
	@echo "... tests/ShellTest.s"
	@echo "... tests/VectorTest.o"
	@echo "... tests/VectorTest.i"
	@echo "... tests/VectorTest.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
