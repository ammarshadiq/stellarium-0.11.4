# Install script for directory: /opt/stellarium-0.11.4/landscapes/guereins

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/landscapes/guereins" TYPE FILE FILES
    "/opt/stellarium-0.11.4/landscapes/guereins/landscape.ini"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.ar.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.be.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.bg.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.nb.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.pt_BR.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.en.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/description.ru.utf8"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereinsb.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins1.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins2.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins3.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins4.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins5.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins6.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins7.png"
    "/opt/stellarium-0.11.4/landscapes/guereins/guereins8.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

