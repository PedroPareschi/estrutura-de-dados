# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/AlocMemoria.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlocMemoria.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlocMemoria.dir/flags.make

CMakeFiles/AlocMemoria.dir/main.c.obj: CMakeFiles/AlocMemoria.dir/flags.make
CMakeFiles/AlocMemoria.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/AlocMemoria.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\AlocMemoria.dir\main.c.obj -c "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\main.c"

CMakeFiles/AlocMemoria.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AlocMemoria.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\main.c" > CMakeFiles\AlocMemoria.dir\main.c.i

CMakeFiles/AlocMemoria.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AlocMemoria.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\main.c" -o CMakeFiles\AlocMemoria.dir\main.c.s

# Object files for target AlocMemoria
AlocMemoria_OBJECTS = \
"CMakeFiles/AlocMemoria.dir/main.c.obj"

# External object files for target AlocMemoria
AlocMemoria_EXTERNAL_OBJECTS =

AlocMemoria.exe: CMakeFiles/AlocMemoria.dir/main.c.obj
AlocMemoria.exe: CMakeFiles/AlocMemoria.dir/build.make
AlocMemoria.exe: CMakeFiles/AlocMemoria.dir/linklibs.rsp
AlocMemoria.exe: CMakeFiles/AlocMemoria.dir/objects1.rsp
AlocMemoria.exe: CMakeFiles/AlocMemoria.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable AlocMemoria.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AlocMemoria.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlocMemoria.dir/build: AlocMemoria.exe

.PHONY : CMakeFiles/AlocMemoria.dir/build

CMakeFiles/AlocMemoria.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AlocMemoria.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AlocMemoria.dir/clean

CMakeFiles/AlocMemoria.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria" "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria" "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug" "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug" "C:\Users\Pedro\CLionProjects\Estrutura de Dados\AlocMemoria\cmake-build-debug\CMakeFiles\AlocMemoria.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AlocMemoria.dir/depend
