# Install script for directory: /opt/stellarium-0.11.4/skycultures/aztec

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/skycultures/aztec" TYPE FILE FILES
    "/opt/stellarium-0.11.4/skycultures/aztec/info.ini"
    "/opt/stellarium-0.11.4/skycultures/aztec/constellation_names.eng.fab"
    "/opt/stellarium-0.11.4/skycultures/aztec/constellation_names.esp.fab"
    "/opt/stellarium-0.11.4/skycultures/aztec/constellationsart.fab"
    "/opt/stellarium-0.11.4/skycultures/aztec/constellationship.fab"
    "/opt/stellarium-0.11.4/skycultures/aztec/star_names.fab"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.ar.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.be.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.pt_BR.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.en.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.es.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.ru.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/description.uk.utf8"
    "/opt/stellarium-0.11.4/skycultures/aztec/aztec0.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/citlaltlachtli.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/citlaltlachtli_t.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/colotlixayac_image.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/colotlixayac.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/colotlixayac_t.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/edificios.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/mamalhuaztli_image.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/mamalhuaztli.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/mamalhuaztli_t.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/nanahuatzin.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/Primeros_Memoriales.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/tianquiztli.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/Tianquiztli_T.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/tiaquitztli_image.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/xonecuilli_Glifo.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/xonecuilli.png"
    "/opt/stellarium-0.11.4/skycultures/aztec/xonecuilli_t.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

