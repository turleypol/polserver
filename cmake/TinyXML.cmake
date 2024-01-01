
message("* tinyxml")

set(TINYXML_SOURCE_DIR "${POL_EXT_LIB_DIR}/tinyxml2-10.0.0")
set(TINYXML_INSTALL_DIR "${TINYXML_SOURCE_DIR}/install")
set(TINYXML_ARGS -DCMAKE_BUILD_TYPE=Release 
   -DCMAKE_INSTALL_PREFIX=${TINYXML_INSTALL_DIR}
   -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
   -DBUILD_SHARED_LIBS=Off
   -DBUILD_TESTS=Off
   -DCMAKE_USER_MAKE_RULES_OVERRIDE_CXX=${CMAKE_CURRENT_LIST_DIR}/cxx_flag_overrides.cmake
   -DCMAKE_VERBOSE_MAKEFILE=ON
   -DCMAKE_OSX_ARCHITECTURES=${PIPED_OSX_ARCHITECTURES}
 )
if (${linux})
  set(TINYXML_LIB "${TINYXML_INSTALL_DIR}/lib/libkaitai_struct_cpp_stl_runtime.a")
else()
  set(TINYXML_LIB "${TINYXML_INSTALL_DIR}/lib/kaitai_struct_cpp_stl_runtime.lib")
endif()

ExternalProject_Add(tinyxml_Ext
  SOURCE_DIR  ${TINYXML_SOURCE_DIR}
    PREFIX tinyxml
    LIST_SEPARATOR |
    CMAKE_ARGS ${TINYXML_ARGS}
    BINARY_DIR ${TINYXML_SOURCE_DIR}/build
    BUILD_COMMAND ${CMAKE_COMMAND} --build . --config Release
    INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config Release --target install
 
    BUILD_BYPRODUCTS ${TINYXML_LIB}
    LOG_DOWNLOAD 1
    LOG_CONFIGURE 1
    LOG_BUILD 1
    LOG_INSTALL 1
    LOG_OUTPUT_ON_FAILURE 1
  )

# imported target to add include/lib dir and additional dependencies
# dependency to the external project needs to be explicit done in the linking library
add_library(tinyxml STATIC IMPORTED)
set_target_properties(tinyxml PROPERTIES IMPORTED_LOCATION ${TINYXML_LIB})
set_target_properties(tinyxml PROPERTIES IMPORTED_IMPLIB ${TINYXML_LIB})

file(MAKE_DIRECTORY ${TINYXML_INSTALL_DIR}/include) #directory has to exist during configure
set_target_properties(tinyxml PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${TINYXML_INSTALL_DIR}/include)

add_dependencies(tinyxml tinyxml_Ext)
set_target_properties (tinyxml PROPERTIES FOLDER 3rdParty)
