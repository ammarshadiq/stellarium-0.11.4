# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/stellarium-0.11.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/stellarium-0.11.4

# Include any dependencies generated for this target.
include src/CMakeFiles/testStelJsonParser.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/testStelJsonParser.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/testStelJsonParser.dir/flags.make

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o: src/CMakeFiles/testStelJsonParser.dir/flags.make
src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o: src/tests/testStelJsonParser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o -c /opt/stellarium-0.11.4/src/tests/testStelJsonParser.cpp

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/tests/testStelJsonParser.cpp > CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.i

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/tests/testStelJsonParser.cpp -o CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.s

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.requires:
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.requires

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.provides: src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/testStelJsonParser.dir/build.make src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.provides.build
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.provides

src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.provides.build: src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.provides.build

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o: src/CMakeFiles/testStelJsonParser.dir/flags.make
src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o: src/core/StelJsonParser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o -c /opt/stellarium-0.11.4/src/core/StelJsonParser.cpp

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/core/StelJsonParser.cpp > CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.i

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/core/StelJsonParser.cpp -o CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.s

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.requires:
.PHONY : src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.requires

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.provides: src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/testStelJsonParser.dir/build.make src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.provides.build
.PHONY : src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.provides

src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.provides.build: src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o
.PHONY : src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.provides.build

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o: src/CMakeFiles/testStelJsonParser.dir/flags.make
src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o: src/tests/moc_testStelJsonParser.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o -c /opt/stellarium-0.11.4/src/tests/moc_testStelJsonParser.cxx

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/tests/moc_testStelJsonParser.cxx > CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.i

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/tests/moc_testStelJsonParser.cxx -o CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.s

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.requires:
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.requires

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.provides: src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.requires
	$(MAKE) -f src/CMakeFiles/testStelJsonParser.dir/build.make src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.provides.build
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.provides

src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.provides.build: src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o
.PHONY : src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.provides.build

src/tests/moc_testStelJsonParser.cxx: src/tests/testStelJsonParser.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating tests/moc_testStelJsonParser.cxx"
	cd /opt/stellarium-0.11.4/src && /usr/bin/moc-qt4 -I/usr/include/qt4 -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtTest -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -I/opt/stellarium-0.11.4 -I/opt/stellarium-0.11.4/src -I/opt/stellarium-0.11.4/src/core -I/opt/stellarium-0.11.4/src/core/modules -I/opt/stellarium-0.11.4/src/core/planetsephems -I/opt/stellarium-0.11.4/src/core/external -I/opt/stellarium-0.11.4/src/core/external/kfilter -I/opt/stellarium-0.11.4/src/core/external/glues_stel/source -I/opt/stellarium-0.11.4/src/core/external/glues_stel/source/libtess -I/opt/stellarium-0.11.4/src/gui -I/opt/stellarium-0.11.4/src/scripting -I/usr/include -DPACKAGE_VERSION="0.11.4" -DSTELLARIUM_SPLASH="Release" -DHAVE_POW10 -DENABLE_NLS -DENABLE_SCRIPT_CONSOLE -DDEFAULT_GRAPHICS_SYSTEM="raster" -DQT_OPENGL_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_TEST_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DINSTALL_DATADIR="/usr/local/share/stellarium" -DINSTALL_LOCALEDIR="/usr/local/share/locale" -DQT_NO_DEBUG -DNDEBUG -DUSE_STATIC_PLUGIN_KEPLERMISSION -DUSE_STATIC_PLUGIN_ANGLEMEASURE -DUSE_STATIC_PLUGIN_COMPASSMARKS -DUSE_STATIC_PLUGIN_SATELLITES -DUSE_STATIC_PLUGIN_TELESCOPECONTROL -DUSE_STATIC_PLUGIN_OCULARS -DUSE_STATIC_PLUGIN_TEXTUSERINTERFACE -DUSE_STATIC_PLUGIN_SOLARSYSTEMEDITOR -DUSE_STATIC_PLUGIN_TIMEZONECONFIGURATION -DUSE_STATIC_PLUGIN_SUPERNOVAE -DUSE_STATIC_PLUGIN_QUASARS -DUSE_STATIC_PLUGIN_PULSARS -DUSE_STATIC_PLUGIN_EXOPLANETS -o /opt/stellarium-0.11.4/src/tests/moc_testStelJsonParser.cxx /opt/stellarium-0.11.4/src/tests/testStelJsonParser.hpp

# Object files for target testStelJsonParser
testStelJsonParser_OBJECTS = \
"CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o" \
"CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o" \
"CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o"

# External object files for target testStelJsonParser
testStelJsonParser_EXTERNAL_OBJECTS =

src/testStelJsonParser: src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o
src/testStelJsonParser: src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o
src/testStelJsonParser: src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o
src/testStelJsonParser: /usr/lib/libQtCore.so
src/testStelJsonParser: /usr/lib/libQtNetwork.so
src/testStelJsonParser: /usr/lib/libQtTest.so
src/testStelJsonParser: /usr/lib/libQtGui.so
src/testStelJsonParser: /usr/lib/libc.so
src/testStelJsonParser: /usr/lib/libc.so
src/testStelJsonParser: /usr/lib/libz.so
src/testStelJsonParser: src/CMakeFiles/testStelJsonParser.dir/build.make
src/testStelJsonParser: src/CMakeFiles/testStelJsonParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testStelJsonParser"
	cd /opt/stellarium-0.11.4/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testStelJsonParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/testStelJsonParser.dir/build: src/testStelJsonParser
.PHONY : src/CMakeFiles/testStelJsonParser.dir/build

src/CMakeFiles/testStelJsonParser.dir/requires: src/CMakeFiles/testStelJsonParser.dir/tests/testStelJsonParser.cpp.o.requires
src/CMakeFiles/testStelJsonParser.dir/requires: src/CMakeFiles/testStelJsonParser.dir/core/StelJsonParser.cpp.o.requires
src/CMakeFiles/testStelJsonParser.dir/requires: src/CMakeFiles/testStelJsonParser.dir/tests/moc_testStelJsonParser.cxx.o.requires
.PHONY : src/CMakeFiles/testStelJsonParser.dir/requires

src/CMakeFiles/testStelJsonParser.dir/clean:
	cd /opt/stellarium-0.11.4/src && $(CMAKE_COMMAND) -P CMakeFiles/testStelJsonParser.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/testStelJsonParser.dir/clean

src/CMakeFiles/testStelJsonParser.dir/depend: src/tests/moc_testStelJsonParser.cxx
	cd /opt/stellarium-0.11.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/stellarium-0.11.4 /opt/stellarium-0.11.4/src /opt/stellarium-0.11.4 /opt/stellarium-0.11.4/src /opt/stellarium-0.11.4/src/CMakeFiles/testStelJsonParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/testStelJsonParser.dir/depend
