# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf_clion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf_clion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf_clion.dir/flags.make

CMakeFiles/ft_printf_clion.dir/main.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf_clion.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/main.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/main.c

CMakeFiles/ft_printf_clion.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/main.c > CMakeFiles/ft_printf_clion.dir/main.c.i

CMakeFiles/ft_printf_clion.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/main.c -o CMakeFiles/ft_printf_clion.dir/main.c.s

CMakeFiles/ft_printf_clion.dir/ft_printf.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/ft_printf.c.o: ../ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf_clion.dir/ft_printf.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/ft_printf.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/ft_printf.c

CMakeFiles/ft_printf_clion.dir/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/ft_printf.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/ft_printf.c > CMakeFiles/ft_printf_clion.dir/ft_printf.c.i

CMakeFiles/ft_printf_clion.dir/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/ft_printf.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/ft_printf.c -o CMakeFiles/ft_printf_clion.dir/ft_printf.c.s

CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o: ../parser/ft_format_parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/ft_format_parser.c

CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/ft_format_parser.c > CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.i

CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/ft_format_parser.c -o CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.s

CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o: ../parser/set_flags.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/set_flags.c

CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/set_flags.c > CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.i

CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/parser/set_flags.c -o CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.s

CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o: ../processor/ft_processor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_processor.c

CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_processor.c > CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.i

CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_processor.c -o CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.s

CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o: ../processor/ft_char_type.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_char_type.c

CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_char_type.c > CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.i

CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_char_type.c -o CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.s

CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o: ../processor/ft_flag_handler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_flag_handler.c

CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_flag_handler.c > CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.i

CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_flag_handler.c -o CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.s

CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o: CMakeFiles/ft_printf_clion.dir/flags.make
CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o: ../processor/ft_string_type.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o   -c /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_string_type.c

CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_string_type.c > CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.i

CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/processor/ft_string_type.c -o CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.s

# Object files for target ft_printf_clion
ft_printf_clion_OBJECTS = \
"CMakeFiles/ft_printf_clion.dir/main.c.o" \
"CMakeFiles/ft_printf_clion.dir/ft_printf.c.o" \
"CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o" \
"CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o" \
"CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o" \
"CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o" \
"CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o" \
"CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o"

# External object files for target ft_printf_clion
ft_printf_clion_EXTERNAL_OBJECTS =

ft_printf_clion: CMakeFiles/ft_printf_clion.dir/main.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/ft_printf.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/parser/ft_format_parser.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/parser/set_flags.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/processor/ft_processor.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/processor/ft_char_type.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/processor/ft_flag_handler.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/processor/ft_string_type.c.o
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/build.make
ft_printf_clion: CMakeFiles/ft_printf_clion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable ft_printf_clion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf_clion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf_clion.dir/build: ft_printf_clion

.PHONY : CMakeFiles/ft_printf_clion.dir/build

CMakeFiles/ft_printf_clion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf_clion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf_clion.dir/clean

CMakeFiles/ft_printf_clion.dir/depend:
	cd /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42 /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42 /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug /home/deds/Desktop/hanisha/ft_printf_project/ft_printf42/cmake-build-debug/CMakeFiles/ft_printf_clion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf_clion.dir/depend

