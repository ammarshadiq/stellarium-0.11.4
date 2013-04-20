# Install script for directory: /opt/stellarium-0.11.4/textures

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/textures" TYPE FILE FILES
    "/opt/stellarium-0.11.4/textures/amalthea.png"
    "/opt/stellarium-0.11.4/textures/proteus.png"
    "/opt/stellarium-0.11.4/textures/triton.png"
    "/opt/stellarium-0.11.4/textures/pluto.png"
    "/opt/stellarium-0.11.4/textures/moon.png"
    "/opt/stellarium-0.11.4/textures/mercury.png"
    "/opt/stellarium-0.11.4/textures/venus.png"
    "/opt/stellarium-0.11.4/textures/earth_cmap.png"
    "/opt/stellarium-0.11.4/textures/earth-clouds.png"
    "/opt/stellarium-0.11.4/textures/earthmap.png"
    "/opt/stellarium-0.11.4/textures/mars.png"
    "/opt/stellarium-0.11.4/textures/jupiter.png"
    "/opt/stellarium-0.11.4/textures/saturn.png"
    "/opt/stellarium-0.11.4/textures/uranus.png"
    "/opt/stellarium-0.11.4/textures/neptune.png"
    "/opt/stellarium-0.11.4/textures/earth-shadow.png"
    "/opt/stellarium-0.11.4/textures/saturn_rings_radial.png"
    "/opt/stellarium-0.11.4/textures/uranus_rings.png"
    "/opt/stellarium-0.11.4/textures/neptune_rings.png"
    "/opt/stellarium-0.11.4/textures/lune.png"
    "/opt/stellarium-0.11.4/textures/phobos.png"
    "/opt/stellarium-0.11.4/textures/deimos.png"
    "/opt/stellarium-0.11.4/textures/io.png"
    "/opt/stellarium-0.11.4/textures/europa.png"
    "/opt/stellarium-0.11.4/textures/ganymede.png"
    "/opt/stellarium-0.11.4/textures/callisto.png"
    "/opt/stellarium-0.11.4/textures/mimas.png"
    "/opt/stellarium-0.11.4/textures/enceladus.png"
    "/opt/stellarium-0.11.4/textures/tethys.png"
    "/opt/stellarium-0.11.4/textures/dione.png"
    "/opt/stellarium-0.11.4/textures/rhea.png"
    "/opt/stellarium-0.11.4/textures/titan.png"
    "/opt/stellarium-0.11.4/textures/hyperion.png"
    "/opt/stellarium-0.11.4/textures/iapetus.png"
    "/opt/stellarium-0.11.4/textures/miranda.png"
    "/opt/stellarium-0.11.4/textures/ariel.png"
    "/opt/stellarium-0.11.4/textures/umbriel.png"
    "/opt/stellarium-0.11.4/textures/titania.png"
    "/opt/stellarium-0.11.4/textures/oberon.png"
    "/opt/stellarium-0.11.4/textures/fog.png"
    "/opt/stellarium-0.11.4/textures/milkyway.png"
    "/opt/stellarium-0.11.4/textures/fogridge.png"
    "/opt/stellarium-0.11.4/textures/ocl.png"
    "/opt/stellarium-0.11.4/textures/gcl.png"
    "/opt/stellarium-0.11.4/textures/pnb.png"
    "/opt/stellarium-0.11.4/textures/neb.png"
    "/opt/stellarium-0.11.4/textures/halo.png"
    "/opt/stellarium-0.11.4/textures/pointeur2.png"
    "/opt/stellarium-0.11.4/textures/pointeur4.png"
    "/opt/stellarium-0.11.4/textures/pointeur5.png"
    "/opt/stellarium-0.11.4/textures/star16x16.png"
    "/opt/stellarium-0.11.4/textures/sun.png"
    "/opt/stellarium-0.11.4/textures/nomap.png"
    "/opt/stellarium-0.11.4/textures/haloLune.png"
    "/opt/stellarium-0.11.4/textures/planet-indicator.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/textures" TYPE FILE RENAME "logo24bits.png" FILES "/opt/stellarium-0.11.4/builds/unix/textures/logo24bits.png")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

