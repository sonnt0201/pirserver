# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\nguye\source\repos\pirserver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\nguye\source\repos\pirserver\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.obj: C:/Users/nguye/source/repos/pirserver/main.cpp
CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.obj -MF CMakeFiles\main.dir\main.cpp.obj.d -o CMakeFiles\main.dir\main.cpp.obj -c C:\Users\nguye\source\repos\pirserver\main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\main.cpp > CMakeFiles\main.dir\main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\main.cpp -o CMakeFiles\main.dir\main.cpp.s

CMakeFiles/main.dir/models/Request.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/models/Request.cpp.obj: C:/Users/nguye/source/repos/pirserver/models/Request.cpp
CMakeFiles/main.dir/models/Request.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/models/Request.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/models/Request.cpp.obj -MF CMakeFiles\main.dir\models\Request.cpp.obj.d -o CMakeFiles\main.dir\models\Request.cpp.obj -c C:\Users\nguye\source\repos\pirserver\models\Request.cpp

CMakeFiles/main.dir/models/Request.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/models/Request.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\models\Request.cpp > CMakeFiles\main.dir\models\Request.cpp.i

CMakeFiles/main.dir/models/Request.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/models/Request.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\models\Request.cpp -o CMakeFiles\main.dir\models\Request.cpp.s

CMakeFiles/main.dir/models/Response.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/models/Response.cpp.obj: C:/Users/nguye/source/repos/pirserver/models/Response.cpp
CMakeFiles/main.dir/models/Response.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/models/Response.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/models/Response.cpp.obj -MF CMakeFiles\main.dir\models\Response.cpp.obj.d -o CMakeFiles\main.dir\models\Response.cpp.obj -c C:\Users\nguye\source\repos\pirserver\models\Response.cpp

CMakeFiles/main.dir/models/Response.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/models/Response.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\models\Response.cpp > CMakeFiles\main.dir\models\Response.cpp.i

CMakeFiles/main.dir/models/Response.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/models/Response.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\models\Response.cpp -o CMakeFiles\main.dir\models\Response.cpp.s

CMakeFiles/main.dir/models/PIRDB.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/models/PIRDB.cpp.obj: C:/Users/nguye/source/repos/pirserver/models/PIRDB.cpp
CMakeFiles/main.dir/models/PIRDB.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/models/PIRDB.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/models/PIRDB.cpp.obj -MF CMakeFiles\main.dir\models\PIRDB.cpp.obj.d -o CMakeFiles\main.dir\models\PIRDB.cpp.obj -c C:\Users\nguye\source\repos\pirserver\models\PIRDB.cpp

CMakeFiles/main.dir/models/PIRDB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/models/PIRDB.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\models\PIRDB.cpp > CMakeFiles\main.dir\models\PIRDB.cpp.i

CMakeFiles/main.dir/models/PIRDB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/models/PIRDB.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\models\PIRDB.cpp -o CMakeFiles\main.dir\models\PIRDB.cpp.s

CMakeFiles/main.dir/controllers/server.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/controllers/server.cpp.obj: C:/Users/nguye/source/repos/pirserver/controllers/server.cpp
CMakeFiles/main.dir/controllers/server.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/controllers/server.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/controllers/server.cpp.obj -MF CMakeFiles\main.dir\controllers\server.cpp.obj.d -o CMakeFiles\main.dir\controllers\server.cpp.obj -c C:\Users\nguye\source\repos\pirserver\controllers\server.cpp

CMakeFiles/main.dir/controllers/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/controllers/server.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\controllers\server.cpp > CMakeFiles\main.dir\controllers\server.cpp.i

CMakeFiles/main.dir/controllers/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/controllers/server.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\controllers\server.cpp -o CMakeFiles\main.dir\controllers\server.cpp.s

CMakeFiles/main.dir/controllers/Controller.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/controllers/Controller.cpp.obj: C:/Users/nguye/source/repos/pirserver/controllers/Controller.cpp
CMakeFiles/main.dir/controllers/Controller.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/controllers/Controller.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/controllers/Controller.cpp.obj -MF CMakeFiles\main.dir\controllers\Controller.cpp.obj.d -o CMakeFiles\main.dir\controllers\Controller.cpp.obj -c C:\Users\nguye\source\repos\pirserver\controllers\Controller.cpp

CMakeFiles/main.dir/controllers/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/controllers/Controller.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\nguye\source\repos\pirserver\controllers\Controller.cpp > CMakeFiles\main.dir\controllers\Controller.cpp.i

CMakeFiles/main.dir/controllers/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/controllers/Controller.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\nguye\source\repos\pirserver\controllers\Controller.cpp -o CMakeFiles\main.dir\controllers\Controller.cpp.s

CMakeFiles/main.dir/lib/sqlite3.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/lib/sqlite3.c.obj: C:/Users/nguye/source/repos/pirserver/lib/sqlite3.c
CMakeFiles/main.dir/lib/sqlite3.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/main.dir/lib/sqlite3.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/lib/sqlite3.c.obj -MF CMakeFiles\main.dir\lib\sqlite3.c.obj.d -o CMakeFiles\main.dir\lib\sqlite3.c.obj -c C:\Users\nguye\source\repos\pirserver\lib\sqlite3.c

CMakeFiles/main.dir/lib/sqlite3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/lib/sqlite3.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\nguye\source\repos\pirserver\lib\sqlite3.c > CMakeFiles\main.dir\lib\sqlite3.c.i

CMakeFiles/main.dir/lib/sqlite3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/lib/sqlite3.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\nguye\source\repos\pirserver\lib\sqlite3.c -o CMakeFiles\main.dir\lib\sqlite3.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.obj" \
"CMakeFiles/main.dir/models/Request.cpp.obj" \
"CMakeFiles/main.dir/models/Response.cpp.obj" \
"CMakeFiles/main.dir/models/PIRDB.cpp.obj" \
"CMakeFiles/main.dir/controllers/server.cpp.obj" \
"CMakeFiles/main.dir/controllers/Controller.cpp.obj" \
"CMakeFiles/main.dir/lib/sqlite3.c.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/main.cpp.obj
main.exe: CMakeFiles/main.dir/models/Request.cpp.obj
main.exe: CMakeFiles/main.dir/models/Response.cpp.obj
main.exe: CMakeFiles/main.dir/models/PIRDB.cpp.obj
main.exe: CMakeFiles/main.dir/controllers/server.cpp.obj
main.exe: CMakeFiles/main.dir/controllers/Controller.cpp.obj
main.exe: CMakeFiles/main.dir/lib/sqlite3.c.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linkLibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\nguye\source\repos\pirserver\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\nguye\source\repos\pirserver C:\Users\nguye\source\repos\pirserver C:\Users\nguye\source\repos\pirserver\build C:\Users\nguye\source\repos\pirserver\build C:\Users\nguye\source\repos\pirserver\build\CMakeFiles\main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

