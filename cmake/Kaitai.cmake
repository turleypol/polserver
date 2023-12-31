message("* kaitai")

set(KAITAI_SOURCE_DIR "${POL_EXT_LIB_DIR}/kaitai-runtime")
set(KAITAI_INSTALL_DIR "${KAITAI_SOURCE_DIR}/lib")
set(KAITAI_ARGS -DCMAKE_BUILD_TYPE=Release 
   -DCMAKE_INSTALL_PREFIX=${KAITAI_INSTALL_DIR}
   -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
   -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
   -DSTRING_ENCODING_TYPE=NONE
   -DBUILD_SHARED_LIBS=Off
   -DBUILD_TESTS=Off
   -DCMAKE_USER_MAKE_RULES_OVERRIDE=${CMAKE_CURRENT_LIST_DIR}/c_flag_overrides.cmake
 )
if (${linux})
set(KAITAI_LIB "${KAITAI_INSTALL_DIR}/lib/kaitai_struct_cpp_stl_runtime.a")
else()
  set(KAITAI_LIB "${KAITAI_INSTALL_DIR}/lib/kaitai_struct_cpp_stl_runtime.lib")
  set(KAITAI_ARGS ${KAITAI_ARGS} -DZLIB_ROOT="${ZLIB_INSTALL_DIR}")
endif()
message("args ${KAITAI_ARGS}")
ExternalProject_Add(kaitai_Ext
  SOURCE_DIR  ${KAITAI_SOURCE_DIR}
    PREFIX kaitai
    LIST_SEPARATOR |
    CMAKE_ARGS ${KAITAI_ARGS}
    BINARY_DIR ${KAITAI_SOURCE_DIR}/build
    BUILD_COMMAND ${CMAKE_COMMAND} --build . --config Release
    INSTALL_COMMAND ${CMAKE_COMMAND} --build . --config Release --target install
 
    BUILD_BYPRODUCTS ${KAITAI_LIB}
        LOG_DOWNLOAD 1
     LOG_CONFIGURE 1
     LOG_BUILD 1
     LOG_INSTALL 1
    LOG_OUTPUT_ON_FAILURE 1
  )
if (${windows})
  ExternalProject_Add_StepDependencies(kaitai_Ext configure libz)
endif()
  add_library(kaitai STATIC IMPORTED)
set_target_properties(kaitai PROPERTIES IMPORTED_LOCATION ${KAITAI_LIB})
set_target_properties(kaitai PROPERTIES IMPORTED_IMPLIB ${KAITAI_LIB})
#add_dependencies(kaktai kaitai_Ext)
  #set(lib_name kaitai)

  #add_library(${lib_name} STATIC
  #  ${${lib_name}_sources}
  #)
  #set_compile_flags(${lib_name} 0)

  #target_include_directories(${lib_name}  PRIVATE
  #  "${POL_EXT_LIB_DIR}/kaitai-runtime"
  #)

  #use_zlib(${lib_name})
  #warning_suppression(${lib_name})

  #target_compile_definitions(${lib_name} PRIVATE
  #  KS_STR_ENCODING_NONE
  #)
  #target_compile_definitions(${lib_name} PUBLIC
  #  KS_ZLIB
  #)
  #if(${linux})
  #  target_compile_options(${lib_name} PRIVATE
  #    -Wno-sign-compare
  #    -Wno-unused-parameter
  # -fno-strict-aliasing
  #  )
  #endif()
  #if (${windows})
  # target_compile_options(${lib_name} PRIVATE
  #   /wd4458 #var name hides
  #   /wd4456 #var name hides
  #   /wd4267 #convert types
  #  )
  #endif()

  #set_target_properties (${lib_name} PROPERTIES FOLDER 3rdParty)
