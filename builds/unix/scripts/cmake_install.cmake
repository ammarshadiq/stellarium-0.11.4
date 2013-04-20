# Install script for directory: /opt/stellarium-0.11.4/scripts

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/scripts" TYPE FILE FILES
    "/opt/stellarium-0.11.4/scripts/startup.ssc"
    "/opt/stellarium-0.11.4/scripts/landscapes.ssc"
    "/opt/stellarium-0.11.4/scripts/lunar_partial.ssc"
    "/opt/stellarium-0.11.4/scripts/lunar_total.ssc"
    "/opt/stellarium-0.11.4/scripts/screensaver.ssc"
    "/opt/stellarium-0.11.4/scripts/common_objects.inc"
    "/opt/stellarium-0.11.4/scripts/solar_eclipse.ssc"
    "/opt/stellarium-0.11.4/scripts/zodiac.ssc"
    "/opt/stellarium-0.11.4/scripts/triple_sunrise_and_sunsets.ssc"
    "/opt/stellarium-0.11.4/scripts/phobos_phun_1.ssc"
    "/opt/stellarium-0.11.4/scripts/phobos_phun_2.ssc"
    "/opt/stellarium-0.11.4/scripts/phobos_phun_3.ssc"
    "/opt/stellarium-0.11.4/scripts/phobos_phun_4.ssc"
    "/opt/stellarium-0.11.4/scripts/phobos_phun_5.ssc"
    "/opt/stellarium-0.11.4/scripts/solar_system_screensaver.ssc"
    "/opt/stellarium-0.11.4/scripts/constellations_tour.ssc"
    "/opt/stellarium-0.11.4/scripts/sun.ssc"
    "/opt/stellarium-0.11.4/scripts/earth_1.ssc"
    "/opt/stellarium-0.11.4/scripts/transit_of_venus.ssc"
    "/opt/stellarium-0.11.4/scripts/analemma.ssc"
    "/opt/stellarium-0.11.4/scripts/supernova.ssc"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

