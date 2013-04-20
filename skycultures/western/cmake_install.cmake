# Install script for directory: /opt/stellarium-0.11.4/skycultures/western

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/skycultures/western" TYPE FILE FILES
    "/opt/stellarium-0.11.4/skycultures/western/constellation_names.eng.fab"
    "/opt/stellarium-0.11.4/skycultures/western/constellationship.fab"
    "/opt/stellarium-0.11.4/skycultures/western/constellationsart.fab"
    "/opt/stellarium-0.11.4/skycultures/western/info.ini"
    "/opt/stellarium-0.11.4/skycultures/western/star_names.fab"
    "/opt/stellarium-0.11.4/skycultures/western/andromeda.png"
    "/opt/stellarium-0.11.4/skycultures/western/antlia.png"
    "/opt/stellarium-0.11.4/skycultures/western/apus.png"
    "/opt/stellarium-0.11.4/skycultures/western/aquarius.png"
    "/opt/stellarium-0.11.4/skycultures/western/aquila.png"
    "/opt/stellarium-0.11.4/skycultures/western/ara.png"
    "/opt/stellarium-0.11.4/skycultures/western/argonavis.png"
    "/opt/stellarium-0.11.4/skycultures/western/aries.png"
    "/opt/stellarium-0.11.4/skycultures/western/auriga.png"
    "/opt/stellarium-0.11.4/skycultures/western/bootes.png"
    "/opt/stellarium-0.11.4/skycultures/western/caelum.png"
    "/opt/stellarium-0.11.4/skycultures/western/camelopardalis.png"
    "/opt/stellarium-0.11.4/skycultures/western/cancer.png"
    "/opt/stellarium-0.11.4/skycultures/western/canes-venatici.png"
    "/opt/stellarium-0.11.4/skycultures/western/canis-major.png"
    "/opt/stellarium-0.11.4/skycultures/western/canis-minor.png"
    "/opt/stellarium-0.11.4/skycultures/western/capricornus.png"
    "/opt/stellarium-0.11.4/skycultures/western/cassiopeia.png"
    "/opt/stellarium-0.11.4/skycultures/western/centaurus.png"
    "/opt/stellarium-0.11.4/skycultures/western/cepheus.png"
    "/opt/stellarium-0.11.4/skycultures/western/cetus.png"
    "/opt/stellarium-0.11.4/skycultures/western/chamaeleon.png"
    "/opt/stellarium-0.11.4/skycultures/western/circinus.png"
    "/opt/stellarium-0.11.4/skycultures/western/columba.png"
    "/opt/stellarium-0.11.4/skycultures/western/coma-berenices.png"
    "/opt/stellarium-0.11.4/skycultures/western/corona-australis.png"
    "/opt/stellarium-0.11.4/skycultures/western/corona-borealis.png"
    "/opt/stellarium-0.11.4/skycultures/western/corvus.png"
    "/opt/stellarium-0.11.4/skycultures/western/crater.png"
    "/opt/stellarium-0.11.4/skycultures/western/crux.png"
    "/opt/stellarium-0.11.4/skycultures/western/cygnus.png"
    "/opt/stellarium-0.11.4/skycultures/western/delphinus.png"
    "/opt/stellarium-0.11.4/skycultures/western/dorado.png"
    "/opt/stellarium-0.11.4/skycultures/western/draco.png"
    "/opt/stellarium-0.11.4/skycultures/western/equuleus.png"
    "/opt/stellarium-0.11.4/skycultures/western/eridanus.png"
    "/opt/stellarium-0.11.4/skycultures/western/fornax.png"
    "/opt/stellarium-0.11.4/skycultures/western/gemini.png"
    "/opt/stellarium-0.11.4/skycultures/western/grus.png"
    "/opt/stellarium-0.11.4/skycultures/western/hercules.png"
    "/opt/stellarium-0.11.4/skycultures/western/horlogium.png"
    "/opt/stellarium-0.11.4/skycultures/western/hydra.png"
    "/opt/stellarium-0.11.4/skycultures/western/hydrus.png"
    "/opt/stellarium-0.11.4/skycultures/western/indus.png"
    "/opt/stellarium-0.11.4/skycultures/western/lacerta.png"
    "/opt/stellarium-0.11.4/skycultures/western/leo-minor.png"
    "/opt/stellarium-0.11.4/skycultures/western/leo.png"
    "/opt/stellarium-0.11.4/skycultures/western/lepus.png"
    "/opt/stellarium-0.11.4/skycultures/western/libra.png"
    "/opt/stellarium-0.11.4/skycultures/western/lupus.png"
    "/opt/stellarium-0.11.4/skycultures/western/lynx.png"
    "/opt/stellarium-0.11.4/skycultures/western/lyra.png"
    "/opt/stellarium-0.11.4/skycultures/western/mensa.png"
    "/opt/stellarium-0.11.4/skycultures/western/microscopium.png"
    "/opt/stellarium-0.11.4/skycultures/western/monoceros.png"
    "/opt/stellarium-0.11.4/skycultures/western/musca.png"
    "/opt/stellarium-0.11.4/skycultures/western/norma.png"
    "/opt/stellarium-0.11.4/skycultures/western/octans.png"
    "/opt/stellarium-0.11.4/skycultures/western/ophiuchus.png"
    "/opt/stellarium-0.11.4/skycultures/western/orion.png"
    "/opt/stellarium-0.11.4/skycultures/western/pavo.png"
    "/opt/stellarium-0.11.4/skycultures/western/pegasus.png"
    "/opt/stellarium-0.11.4/skycultures/western/perseus.png"
    "/opt/stellarium-0.11.4/skycultures/western/phoenix.png"
    "/opt/stellarium-0.11.4/skycultures/western/pictor.png"
    "/opt/stellarium-0.11.4/skycultures/western/pisces.png"
    "/opt/stellarium-0.11.4/skycultures/western/piscis-austrinus.png"
    "/opt/stellarium-0.11.4/skycultures/western/pyxis.png"
    "/opt/stellarium-0.11.4/skycultures/western/reticulum.png"
    "/opt/stellarium-0.11.4/skycultures/western/sagitta.png"
    "/opt/stellarium-0.11.4/skycultures/western/sagittarius.png"
    "/opt/stellarium-0.11.4/skycultures/western/scorpius.png"
    "/opt/stellarium-0.11.4/skycultures/western/sculptor.png"
    "/opt/stellarium-0.11.4/skycultures/western/scutum.png"
    "/opt/stellarium-0.11.4/skycultures/western/sextans.png"
    "/opt/stellarium-0.11.4/skycultures/western/taurus.png"
    "/opt/stellarium-0.11.4/skycultures/western/telescopium.png"
    "/opt/stellarium-0.11.4/skycultures/western/triangulum-australe.png"
    "/opt/stellarium-0.11.4/skycultures/western/triangulum.png"
    "/opt/stellarium-0.11.4/skycultures/western/tucana.png"
    "/opt/stellarium-0.11.4/skycultures/western/ursa-major.png"
    "/opt/stellarium-0.11.4/skycultures/western/ursa-minor.png"
    "/opt/stellarium-0.11.4/skycultures/western/virgo.png"
    "/opt/stellarium-0.11.4/skycultures/western/volans.png"
    "/opt/stellarium-0.11.4/skycultures/western/vulpecula.png"
    "/opt/stellarium-0.11.4/skycultures/western/description.ar.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.be.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.en.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.it.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.ru.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.nb.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.uk.utf8"
    "/opt/stellarium-0.11.4/skycultures/western/description.pt_BR.utf8"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

