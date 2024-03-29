INCLUDE_DIRECTORIES(
    .
    gui
    ${CMAKE_BINARY_DIR}/plugins/KeplerMission/src
    ${CMAKE_BINARY_DIR}/plugins/KeplerMission/src/gui
)

LINK_DIRECTORIES(${BUILD_DIR}/src)

SET(KeplerMission_SRCS
  KeplerMission.hpp
  KeplerMission.cpp
  gui/KeplerMissionDialog.hpp
  gui/KeplerMissionDialog.cpp
)

SET(KeplerMissionDialog_UIS
  gui/KeplerMissionDialog.ui
)
QT4_WRAP_UI(KeplerMissionDialog_UIS_H ${KeplerMissionDialog_UIS})

SET(KeplerMission_RES ../resources/KeplerMission.qrc)
QT4_ADD_RESOURCES(KeplerMission_RES_CXX ${KeplerMission_RES})

SET(KeplerMission_MOC_HDRS
 KeplerMission.hpp
 gui/KeplerMissionDialog.hpp
)

# After this call, KeplerMission_MOC_SRCS = moc_KeplerMission.cxx
QT4_WRAP_CPP(KeplerMission_MOC_SRCS ${KeplerMission_MOC_HDRS})

SET(extLinkerOption ${QT_LIBRARIES} ${JPEG_LIBRARIES} ${PNG_LIBRARIES} ${OPENGL_LIBRARIES} ${ICONV_LIBRARIES} ${INTL_LIBRARIES})

############### For building the dynamic library ######################
IF(BUILD_DYNAMIC_PLUGINS)
	ADD_LIBRARY(KeplerMission MODULE ${KeplerMission_SRCS} ${KeplerMission_MOC_SRCS} ${KeplerMission_RES_CXX} ${KeplerMissionDialog_UIS_H})
	IF(APPLE)
		FIND_LIBRARY(OPENGL_LIBRARY OpenGL)
		MARK_AS_ADVANCED(OPENGL_LIBRARY)
		SET_TARGET_PROPERTIES(KeplerMission PROPERTIES LINK_FLAGS "-undefined dynamic_lookup" SUFFIX ".dylib")
	ENDIF()

	IF(WIN32)
		SET_TARGET_PROPERTIES(KeplerMission PROPERTIES LINK_FLAGS "-enable-runtime-pseudo-reloc -Wl,--allow-multiple-definition" )
		SET(StelMain stelMain)
	ELSE(WIN32)
		SET(StelMain )
	ENDIF(WIN32)

	TARGET_LINK_LIBRARIES(KeplerMission ${StelMain} ${extLinkerOption})
	INSTALL(TARGETS KeplerMission DESTINATION "modules/KeplerMission")
ENDIF()

############### For building the static library ######################
IF(BUILD_STATIC_PLUGINS)
	ADD_LIBRARY(KeplerMission-static STATIC ${KeplerMission_SRCS} ${KeplerMission_MOC_SRCS} ${KeplerMission_RES_CXX} ${KeplerMissionDialog_UIS_H})
	# The library target "KeplerMission-static" has a default OUTPUT_NAME of "KeplerMission-static", so change it.
	SET_TARGET_PROPERTIES(KeplerMission-static PROPERTIES OUTPUT_NAME "KeplerMission")
	TARGET_LINK_LIBRARIES(KeplerMission-static ${extLinkerOption})
	SET_TARGET_PROPERTIES(KeplerMission-static PROPERTIES COMPILE_FLAGS "-DQT_STATICPLUGIN")
	ADD_DEPENDENCIES(AllStaticPlugins KeplerMission-static)
ENDIF()
