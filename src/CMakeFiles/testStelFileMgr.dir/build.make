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
include src/CMakeFiles/testStelFileMgr.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/testStelFileMgr.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/testStelFileMgr.dir/flags.make

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o: src/CMakeFiles/testStelFileMgr.dir/flags.make
src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o: src/core/StelFileMgr.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o -c /opt/stellarium-0.11.4/src/core/StelFileMgr.cpp

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/core/StelFileMgr.cpp > CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.i

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/core/StelFileMgr.cpp -o CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.s

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.requires:
.PHONY : src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.requires

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.provides: src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/testStelFileMgr.dir/build.make src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.provides.build
.PHONY : src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.provides

src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.provides.build: src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o
.PHONY : src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.provides.build

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o: src/CMakeFiles/testStelFileMgr.dir/flags.make
src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o: src/tests/testStelFileMgr.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o -c /opt/stellarium-0.11.4/src/tests/testStelFileMgr.cpp

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/tests/testStelFileMgr.cpp > CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.i

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/tests/testStelFileMgr.cpp -o CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.s

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.requires:
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.requires

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.provides: src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/testStelFileMgr.dir/build.make src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.provides.build
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.provides

src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.provides.build: src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.provides.build

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o: src/CMakeFiles/testStelFileMgr.dir/flags.make
src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o: src/tests/moc_testStelFileMgr.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o -c /opt/stellarium-0.11.4/src/tests/moc_testStelFileMgr.cxx

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.i"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /opt/stellarium-0.11.4/src/tests/moc_testStelFileMgr.cxx > CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.i

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.s"
	cd /opt/stellarium-0.11.4/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /opt/stellarium-0.11.4/src/tests/moc_testStelFileMgr.cxx -o CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.s

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.requires:
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.requires

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.provides: src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.requires
	$(MAKE) -f src/CMakeFiles/testStelFileMgr.dir/build.make src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.provides.build
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.provides

src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.provides.build: src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o
.PHONY : src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.provides.build

src/tests/moc_testStelFileMgr.cxx: src/tests/testStelFileMgr.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /opt/stellarium-0.11.4/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating tests/moc_testStelFileMgr.cxx"
	cd /opt/stellarium-0.11.4/src && /usr/bin/moc-qt4 -I/usr/include/qt4 -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtTest -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -I/opt/stellarium-0.11.4 -I/opt/stellarium-0.11.4/src -I/opt/stellarium-0.11.4/src/core -I/opt/stellarium-0.11.4/src/core/modules -I/opt/stellarium-0.11.4/src/core/planetsephems -I/opt/stellarium-0.11.4/src/core/external -I/opt/stellarium-0.11.4/src/core/external/kfilter -I/opt/stellarium-0.11.4/src/core/external/glues_stel/source -I/opt/stellarium-0.11.4/src/core/external/glues_stel/source/libtess -I/opt/stellarium-0.11.4/src/gui -I/opt/stellarium-0.11.4/src/scripting -I/usr/include -DPACKAGE_VERSION="0.11.4" -DSTELLARIUM_SPLASH="Release" -DHAVE_POW10 -DENABLE_NLS -DENABLE_SCRIPT_CONSOLE -DDEFAULT_GRAPHICS_SYSTEM="raster" -DQT_OPENGL_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_TEST_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DINSTALL_DATADIR="/usr/local/share/stellarium" -DINSTALL_LOCALEDIR="/usr/local/share/locale" -DQT_NO_DEBUG -DNDEBUG -DUSE_STATIC_PLUGIN_KEPLERMISSION -DUSE_STATIC_PLUGIN_ANGLEMEASURE -DUSE_STATIC_PLUGIN_COMPASSMARKS -DUSE_STATIC_PLUGIN_SATELLITES -DUSE_STATIC_PLUGIN_TELESCOPECONTROL -DUSE_STATIC_PLUGIN_OCULARS -DUSE_STATIC_PLUGIN_TEXTUSERINTERFACE -DUSE_STATIC_PLUGIN_SOLARSYSTEMEDITOR -DUSE_STATIC_PLUGIN_TIMEZONECONFIGURATION -DUSE_STATIC_PLUGIN_SUPERNOVAE -DUSE_STATIC_PLUGIN_QUASARS -DUSE_STATIC_PLUGIN_PULSARS -DUSE_STATIC_PLUGIN_EXOPLANETS -o /opt/stellarium-0.11.4/src/tests/moc_testStelFileMgr.cxx /opt/stellarium-0.11.4/src/tests/testStelFileMgr.hpp

# Object files for target testStelFileMgr
testStelFileMgr_OBJECTS = \
"CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o" \
"CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o" \
"CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o"

# External object files for target testStelFileMgr
testStelFileMgr_EXTERNAL_OBJECTS =

src/testStelFileMgr: src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o
src/testStelFileMgr: src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o
src/testStelFileMgr: src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o
src/testStelFileMgr: /usr/lib/libQtCore.so
src/testStelFileMgr: /usr/lib/libQtNetwork.so
src/testStelFileMgr: /usr/lib/libQtTest.so
src/testStelFileMgr: /usr/lib/libQtGui.so
src/testStelFileMgr: /usr/lib/libc.so
src/testStelFileMgr: /usr/lib/libc.so
src/testStelFileMgr: /usr/lib/libz.so
src/testStelFileMgr: src/CMakeFiles/testStelFileMgr.dir/build.make
src/testStelFileMgr: src/CMakeFiles/testStelFileMgr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testStelFileMgr"
	cd /opt/stellarium-0.11.4/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testStelFileMgr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/testStelFileMgr.dir/build: src/testStelFileMgr
.PHONY : src/CMakeFiles/testStelFileMgr.dir/build

src/CMakeFiles/testStelFileMgr.dir/requires: src/CMakeFiles/testStelFileMgr.dir/core/StelFileMgr.cpp.o.requires
src/CMakeFiles/testStelFileMgr.dir/requires: src/CMakeFiles/testStelFileMgr.dir/tests/testStelFileMgr.cpp.o.requires
src/CMakeFiles/testStelFileMgr.dir/requires: src/CMakeFiles/testStelFileMgr.dir/tests/moc_testStelFileMgr.cxx.o.requires
.PHONY : src/CMakeFiles/testStelFileMgr.dir/requires

src/CMakeFiles/testStelFileMgr.dir/clean:
	cd /opt/stellarium-0.11.4/src && $(CMAKE_COMMAND) -P CMakeFiles/testStelFileMgr.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/testStelFileMgr.dir/clean

src/CMakeFiles/testStelFileMgr.dir/depend: src/tests/moc_testStelFileMgr.cxx
	cd /opt/stellarium-0.11.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/stellarium-0.11.4 /opt/stellarium-0.11.4/src /opt/stellarium-0.11.4 /opt/stellarium-0.11.4/src /opt/stellarium-0.11.4/src/CMakeFiles/testStelFileMgr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/testStelFileMgr.dir/depend

