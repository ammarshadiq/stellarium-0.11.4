# Install script for directory: /opt/stellarium-0.11.4/landscapes/hurricane

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/landscapes/hurricane" TYPE FILE FILES
    "/opt/stellarium-0.11.4/landscapes/hurricane/landscape.ini"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.ar.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.be.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.bg.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.nb.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.pt_BR.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.en.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/description.ru.utf8"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricaneb.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane1.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane2.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane3.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane4.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane5.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane6.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane7.png"
    "/opt/stellarium-0.11.4/landscapes/hurricane/hurricane8.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

