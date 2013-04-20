# Install script for directory: /opt/stellarium-0.11.4/nebulae/default

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/nebulae/default" TYPE FILE FILES
    "/opt/stellarium-0.11.4/nebulae/default/textures.json"
    "/opt/stellarium-0.11.4/nebulae/default/nebula_textures.fab"
    "/opt/stellarium-0.11.4/nebulae/default/ngc2000.dat"
    "/opt/stellarium-0.11.4/nebulae/default/ngc2000names.dat"
    "/opt/stellarium-0.11.4/nebulae/default/ic434bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/m100.png"
    "/opt/stellarium-0.11.4/nebulae/default/m101.png"
    "/opt/stellarium-0.11.4/nebulae/default/m102.png"
    "/opt/stellarium-0.11.4/nebulae/default/m103.png"
    "/opt/stellarium-0.11.4/nebulae/default/m104.png"
    "/opt/stellarium-0.11.4/nebulae/default/m105.png"
    "/opt/stellarium-0.11.4/nebulae/default/m106.png"
    "/opt/stellarium-0.11.4/nebulae/default/m108.png"
    "/opt/stellarium-0.11.4/nebulae/default/m109.png"
    "/opt/stellarium-0.11.4/nebulae/default/m10.png"
    "/opt/stellarium-0.11.4/nebulae/default/m110.png"
    "/opt/stellarium-0.11.4/nebulae/default/m11.png"
    "/opt/stellarium-0.11.4/nebulae/default/m12.png"
    "/opt/stellarium-0.11.4/nebulae/default/m13.png"
    "/opt/stellarium-0.11.4/nebulae/default/m14.png"
    "/opt/stellarium-0.11.4/nebulae/default/m15dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m16dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m17spano.png"
    "/opt/stellarium-0.11.4/nebulae/default/m18.png"
    "/opt/stellarium-0.11.4/nebulae/default/m1dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m20bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/m22.png"
    "/opt/stellarium-0.11.4/nebulae/default/m27dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m2.png"
    "/opt/stellarium-0.11.4/nebulae/default/m31.png"
    "/opt/stellarium-0.11.4/nebulae/default/m33bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/m34.png"
    "/opt/stellarium-0.11.4/nebulae/default/m36.png"
    "/opt/stellarium-0.11.4/nebulae/default/m37.png"
    "/opt/stellarium-0.11.4/nebulae/default/m38.png"
    "/opt/stellarium-0.11.4/nebulae/default/m3.png"
    "/opt/stellarium-0.11.4/nebulae/default/m42dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m44spano.png"
    "/opt/stellarium-0.11.4/nebulae/default/m46.png"
    "/opt/stellarium-0.11.4/nebulae/default/m49.png"
    "/opt/stellarium-0.11.4/nebulae/default/m4.png"
    "/opt/stellarium-0.11.4/nebulae/default/m51.png"
    "/opt/stellarium-0.11.4/nebulae/default/m53.png"
    "/opt/stellarium-0.11.4/nebulae/default/m54.png"
    "/opt/stellarium-0.11.4/nebulae/default/m57dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m58.png"
    "/opt/stellarium-0.11.4/nebulae/default/m59.png"
    "/opt/stellarium-0.11.4/nebulae/default/m5.png"
    "/opt/stellarium-0.11.4/nebulae/default/m60.png"
    "/opt/stellarium-0.11.4/nebulae/default/m61.png"
    "/opt/stellarium-0.11.4/nebulae/default/m63.png"
    "/opt/stellarium-0.11.4/nebulae/default/m64.png"
    "/opt/stellarium-0.11.4/nebulae/default/m65.png"
    "/opt/stellarium-0.11.4/nebulae/default/m66.png"
    "/opt/stellarium-0.11.4/nebulae/default/m6.png"
    "/opt/stellarium-0.11.4/nebulae/default/m74.png"
    "/opt/stellarium-0.11.4/nebulae/default/m76.png"
    "/opt/stellarium-0.11.4/nebulae/default/m78.png"
    "/opt/stellarium-0.11.4/nebulae/default/m7.png"
    "/opt/stellarium-0.11.4/nebulae/default/m81.png"
    "/opt/stellarium-0.11.4/nebulae/default/m82.png"
    "/opt/stellarium-0.11.4/nebulae/default/m83.png"
    "/opt/stellarium-0.11.4/nebulae/default/m84.png"
    "/opt/stellarium-0.11.4/nebulae/default/m85.png"
    "/opt/stellarium-0.11.4/nebulae/default/m86.png"
    "/opt/stellarium-0.11.4/nebulae/default/m87.png"
    "/opt/stellarium-0.11.4/nebulae/default/m89.png"
    "/opt/stellarium-0.11.4/nebulae/default/m8bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/m90.png"
    "/opt/stellarium-0.11.4/nebulae/default/m91.png"
    "/opt/stellarium-0.11.4/nebulae/default/m92.png"
    "/opt/stellarium-0.11.4/nebulae/default/m94.png"
    "/opt/stellarium-0.11.4/nebulae/default/m95.png"
    "/opt/stellarium-0.11.4/nebulae/default/m96.png"
    "/opt/stellarium-0.11.4/nebulae/default/m97dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/m98.png"
    "/opt/stellarium-0.11.4/nebulae/default/m99.png"
    "/opt/stellarium-0.11.4/nebulae/default/m9.png"
    "/opt/stellarium-0.11.4/nebulae/default/n1499bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/n2244bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/n253bousquet.png"
    "/opt/stellarium-0.11.4/nebulae/default/n6946dumont.png"
    "/opt/stellarium-0.11.4/nebulae/default/n869-884spano.png"
    "/opt/stellarium-0.11.4/nebulae/default/pleiades.png"
    "/opt/stellarium-0.11.4/nebulae/default/m93.png"
    "/opt/stellarium-0.11.4/nebulae/default/m80.png"
    "/opt/stellarium-0.11.4/nebulae/default/m79.png"
    "/opt/stellarium-0.11.4/nebulae/default/m75.png"
    "/opt/stellarium-0.11.4/nebulae/default/m73.png"
    "/opt/stellarium-0.11.4/nebulae/default/m72.png"
    "/opt/stellarium-0.11.4/nebulae/default/m71.png"
    "/opt/stellarium-0.11.4/nebulae/default/m70.png"
    "/opt/stellarium-0.11.4/nebulae/default/m69.png"
    "/opt/stellarium-0.11.4/nebulae/default/m68.png"
    "/opt/stellarium-0.11.4/nebulae/default/m67.png"
    "/opt/stellarium-0.11.4/nebulae/default/m62.png"
    "/opt/stellarium-0.11.4/nebulae/default/m56.png"
    "/opt/stellarium-0.11.4/nebulae/default/m55.png"
    "/opt/stellarium-0.11.4/nebulae/default/m52.png"
    "/opt/stellarium-0.11.4/nebulae/default/m50.png"
    "/opt/stellarium-0.11.4/nebulae/default/m48.png"
    "/opt/stellarium-0.11.4/nebulae/default/m41.png"
    "/opt/stellarium-0.11.4/nebulae/default/m35.png"
    "/opt/stellarium-0.11.4/nebulae/default/m30.png"
    "/opt/stellarium-0.11.4/nebulae/default/m29.png"
    "/opt/stellarium-0.11.4/nebulae/default/m28.png"
    "/opt/stellarium-0.11.4/nebulae/default/m26.png"
    "/opt/stellarium-0.11.4/nebulae/default/m25.png"
    "/opt/stellarium-0.11.4/nebulae/default/m24.png"
    "/opt/stellarium-0.11.4/nebulae/default/m23.png"
    "/opt/stellarium-0.11.4/nebulae/default/m21.png"
    "/opt/stellarium-0.11.4/nebulae/default/m19.png"
    "/opt/stellarium-0.11.4/nebulae/default/m107.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

