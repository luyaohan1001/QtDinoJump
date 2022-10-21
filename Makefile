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
CMAKE_SOURCE_DIR = /home/luyaohan1001/Projects/QtDinoJump

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luyaohan1001/Projects/QtDinoJump

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
	$(CMAKE_COMMAND) -E cmake_progress_start /home/luyaohan1001/Projects/QtDinoJump/CMakeFiles /home/luyaohan1001/Projects/QtDinoJump//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/luyaohan1001/Projects/QtDinoJump/CMakeFiles 0
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
# Target rules for targets named QtDinoJump

# Build rule for target.
QtDinoJump: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 QtDinoJump
.PHONY : QtDinoJump

# fast build rule for target.
QtDinoJump/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/build
.PHONY : QtDinoJump/fast

#=============================================================================
# Target rules for targets named QtDinoJump_autogen

# Build rule for target.
QtDinoJump_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 QtDinoJump_autogen
.PHONY : QtDinoJump_autogen

# fast build rule for target.
QtDinoJump_autogen/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump_autogen.dir/build.make CMakeFiles/QtDinoJump_autogen.dir/build
.PHONY : QtDinoJump_autogen/fast

QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.o: QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.o
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.o

# target to build an object file
QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.o
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.o

QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.i: QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.i
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.i

# target to preprocess a source file
QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.i
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.i

QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.s: QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.s
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.s

# target to generate assembly for a file
QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.s
.PHONY : QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.cpp.s

QtDinoJump_autogen/mocs_compilation.o: QtDinoJump_autogen/mocs_compilation.cpp.o
.PHONY : QtDinoJump_autogen/mocs_compilation.o

# target to build an object file
QtDinoJump_autogen/mocs_compilation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/mocs_compilation.cpp.o
.PHONY : QtDinoJump_autogen/mocs_compilation.cpp.o

QtDinoJump_autogen/mocs_compilation.i: QtDinoJump_autogen/mocs_compilation.cpp.i
.PHONY : QtDinoJump_autogen/mocs_compilation.i

# target to preprocess a source file
QtDinoJump_autogen/mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/mocs_compilation.cpp.i
.PHONY : QtDinoJump_autogen/mocs_compilation.cpp.i

QtDinoJump_autogen/mocs_compilation.s: QtDinoJump_autogen/mocs_compilation.cpp.s
.PHONY : QtDinoJump_autogen/mocs_compilation.s

# target to generate assembly for a file
QtDinoJump_autogen/mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/QtDinoJump_autogen/mocs_compilation.cpp.s
.PHONY : QtDinoJump_autogen/mocs_compilation.cpp.s

cactus.o: cactus.cpp.o
.PHONY : cactus.o

# target to build an object file
cactus.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/cactus.cpp.o
.PHONY : cactus.cpp.o

cactus.i: cactus.cpp.i
.PHONY : cactus.i

# target to preprocess a source file
cactus.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/cactus.cpp.i
.PHONY : cactus.cpp.i

cactus.s: cactus.cpp.s
.PHONY : cactus.s

# target to generate assembly for a file
cactus.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/cactus.cpp.s
.PHONY : cactus.cpp.s

dinosaur.o: dinosaur.cpp.o
.PHONY : dinosaur.o

# target to build an object file
dinosaur.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/dinosaur.cpp.o
.PHONY : dinosaur.cpp.o

dinosaur.i: dinosaur.cpp.i
.PHONY : dinosaur.i

# target to preprocess a source file
dinosaur.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/dinosaur.cpp.i
.PHONY : dinosaur.cpp.i

dinosaur.s: dinosaur.cpp.s
.PHONY : dinosaur.s

# target to generate assembly for a file
dinosaur.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/dinosaur.cpp.s
.PHONY : dinosaur.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/main.cpp.s
.PHONY : main.cpp.s

mainwindow.o: mainwindow.cpp.o
.PHONY : mainwindow.o

# target to build an object file
mainwindow.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/mainwindow.cpp.o
.PHONY : mainwindow.cpp.o

mainwindow.i: mainwindow.cpp.i
.PHONY : mainwindow.i

# target to preprocess a source file
mainwindow.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/mainwindow.cpp.i
.PHONY : mainwindow.cpp.i

mainwindow.s: mainwindow.cpp.s
.PHONY : mainwindow.s

# target to generate assembly for a file
mainwindow.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/QtDinoJump.dir/build.make CMakeFiles/QtDinoJump.dir/mainwindow.cpp.s
.PHONY : mainwindow.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... QtDinoJump_autogen"
	@echo "... QtDinoJump"
	@echo "... QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.o"
	@echo "... QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.i"
	@echo "... QtDinoJump_autogen/EWIEGA46WW/qrc_MediaResources.s"
	@echo "... QtDinoJump_autogen/mocs_compilation.o"
	@echo "... QtDinoJump_autogen/mocs_compilation.i"
	@echo "... QtDinoJump_autogen/mocs_compilation.s"
	@echo "... cactus.o"
	@echo "... cactus.i"
	@echo "... cactus.s"
	@echo "... dinosaur.o"
	@echo "... dinosaur.i"
	@echo "... dinosaur.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... mainwindow.o"
	@echo "... mainwindow.i"
	@echo "... mainwindow.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

