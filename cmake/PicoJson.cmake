# https://github.com/fmtlib/fmt


# imported target to add include/lib dir and additional dependencies
add_library(picojsonlib INTERFACE IMPORTED)
set_target_properties(picojsonlib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${POL_EXT_LIB_DIR}/picojson-1.3.0"
)
