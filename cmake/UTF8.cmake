# https://github.com/fmtlib/fmt


# imported target to add include/lib dir and additional dependencies
add_library(utf8lib INTERFACE IMPORTED)
set_target_properties(utf8lib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${POL_EXT_LIB_DIR}"
)
