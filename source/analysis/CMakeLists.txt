#------------------------------------------------------------------------------
# CMakeLists.txt
# Module : G4geometry
# Package: Geant4.src.G4analysis
#
# Top level CMakeLists.txt for a Geant4 Global Library
# or collection of sublibraries
#
# Generated on : 24/9/2010
#
# $Id: CMakeLists.txt 93451 2015-10-22 14:53:57Z gcosmo $
#
#------------------------------------------------------------------------------

if (GEANT4_USE_FREETYPE)
  add_definitions(-DTOOLS_USE_FREETYPE)
  add_definitions(-DTOOLS_USE_EXPAT)
endif()

add_subdirectory(csv)
add_subdirectory(g4tools)
add_subdirectory(hntools)
add_subdirectory(management)
add_subdirectory(parameters)
add_subdirectory(root)
add_subdirectory(xml)

if(NOT GEANT4_BUILD_GRANULAR_LIBS)
    include(Geant4MacroLibraryTargets)
    GEANT4_GLOBAL_LIBRARY_TARGET(NAME G4analysis
        COMPONENTS
            csv/sources.cmake
            g4tools/sources.cmake
            hntools/sources.cmake
            management/sources.cmake
            parameters/sources.cmake
            root/sources.cmake
            xml/sources.cmake
)
endif()

#-----------------------------------------------------------------------
# Install fonts
#
if (GEANT4_USE_FREETYPE)
  install(DIRECTORY fonts/
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/Geant4-${Geant4_VERSION}/fonts
    PATTERN ".svn" EXCLUDE
  )
endif()



