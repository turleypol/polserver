# imported target to add include/lib dir and additional dependencies
add_library(libutf8 INTERFACE IMPORTED)
set_target_properties(libutf8 PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${POL_EXT_LIB_DIR}"
)
