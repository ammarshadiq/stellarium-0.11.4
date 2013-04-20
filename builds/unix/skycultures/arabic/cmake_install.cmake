# Install script for directory: /opt/stellarium-0.11.4/skycultures/arabic

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/skycultures/arabic" TYPE FILE FILES
    "/opt/stellarium-0.11.4/skycultures/arabic/info.ini"
    "/opt/stellarium-0.11.4/skycultures/arabic/constellation_names.eng.fab"
    "/opt/stellarium-0.11.4/skycultures/arabic/constellation_names.exp.fab"
    "/opt/stellarium-0.11.4/skycultures/arabic/constellationsart.fab"
    "/opt/stellarium-0.11.4/skycultures/arabic/constellationship.fab"
    "/opt/stellarium-0.11.4/skycultures/arabic/star_names.fab"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.en.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.pt_BR.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.ar.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.be.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.ru.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/description.uk.utf8"
    "/opt/stellarium-0.11.4/skycultures/arabic/Bearer-of-the-Demons-Head.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/Book_of_Fixed_Stars3.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/CentaurAndThe-Beast-of-Prey.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/Cetus.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/Inflammatus.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/Part-of-the-Horse.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Archer.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Arrow.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Balance.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Brave.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Bull.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Censer.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Crab.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Dolphin.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Dragon.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Eagle.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Giant.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Great-Cup.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Great-Horse.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Greater-Bear.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Greater-Dog.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Hare.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Hen.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Howler.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Kneeling-Man.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Lesser-Bear.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Lesser-Dog.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Lion.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Maiden.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Northern-Crown.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Ram.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Raven.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Reins-holder.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-River.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Scorpion.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Shackled-Woman.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Ship.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Snake-Charmer.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Southern-Crown.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Southern-Whale.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Triangle.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Turtle.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Twins.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Well-bucket.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Whale.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/The-Young-Goat.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/Who-Lady-Has-Chair.png"
    "/opt/stellarium-0.11.4/skycultures/arabic/al_sufi_altre_006_copia.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

