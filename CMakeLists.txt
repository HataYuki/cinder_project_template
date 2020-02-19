cmake_minimum_required(VERSION 3.15)
set( CMAKE_VERBOSE_MAKEFILE ON )

project( cinder_project_templateApp )

get_filename_component( CINDER_PATH "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE )
get_filename_component( APP_PATH "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE )

include( "${CINDER_PATH}/proj/cmake/modules/cinderMakeApp.cmake" )

ci_make_app(
        SOURCES     ${APP_PATH}/src/cinder_project_templateApp.cpp
        CINDER_PATH ${CINDER_PATH}
        INCLUDES    ${APP_PATH}/include
)

set_target_properties(
        cinder_project_templateApp
        PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_INFO_PLIST "${CMAKE_CURRENT_SOURCE_DIR}/Info.plist"
)