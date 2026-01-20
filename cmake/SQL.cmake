  set(SQL_REPO "https://github.com/mysql/mysql-server")
  set(SQL_TAG "mysql-8.4.7")
  set (SQL_SOURCE_DIR "${POL_EXT_LIB_DIR}/${SQL_TAG}")
  set(SQL_ARGS "-DWITHOUT_SERVER=ON -DWITH_BOOST=${POL_EXT_LIB_DIR}/boost_1_89_0 -DWITH_UNIT_TESTS=OFF -DFORCE_INSOURCE_BUILD=1")
  set(SQL_LIB "${SQL_SOURCE_DIR}/sql.so")
  if(NOT EXISTS ${SQL_LIB})
  ExternalProject_Add(mysqlclient_ext
    GIT_REPOSITORY   ${SQL_REPO}
    GIT_TAG          ${SQL_TAG}
    # only valid option if its a tag or branch not a commit
    GIT_SHALLOW      TRUE
    PREFIX           "${SQL_SOURCE_DIR}/build"
    LIST_SEPARATOR |
    CMAKE_ARGS       ${SQL_ARGS}
    SOURCE_DIR       "${SQL_SOURCE_DIR}"
    #    BUILD_IN_SOURCE  1
    INSTALL_COMMAND  ${CMAKE_COMMAND} --build . --config Release --target install
    BUILD_BYPRODUCTS ${SQL_LIB}
    EXCLUDE_FROM_ALL 1
  )
else()
  message("  - already built")
endif()
  add_library(libsql SHARED IMPORTED)
  file(MAKE_DIRECTORY ${SQL_SOURCE_DIR}/blubb) #directory has to exist during configure
set_target_properties(libsql PROPERTIES
  IMPORTED_LOCATION ${SQL_LIB}
  IMPORTED_IMPLIB ${SQL_LIB}
  INTERFACE_INCLUDE_DIRECTORIES ${SQL_SOURCE_DIR}/blubb
  FOLDER 3rdParty
)
  add_dependencies(libsql mysqlclient_ext)
  return()

if(NOT HAVE_MYSQL)
  return()
endif()
if(${windows})
  if (${ARCH_BITS} EQUAL "64")
    set(mysql_path ${POL_EXT_LIB_DIR}/mysql-connector-c-6.0.2-winx64)
  else()
    set(mysql_path ${POL_EXT_LIB_DIR}/mysql-connector-c-6.0.2-win32)
  endif()
  
  add_library(libsql SHARED IMPORTED)
  set_target_properties(libsql PROPERTIES
    IMPORTED_LOCATION ${mysql_path}/lib/libmysql.dll
    IMPORTED_IMPLIB ${mysql_path}/lib/libmysql.lib
    INTERFACE_INCLUDE_DIRECTORIES ${mysql_path}/include
    FOLDER 3rdParty
  )
else()
  add_library(libsql INTERFACE IMPORTED)
  if (APPLE)
    pkg_search_module(MYSQL QUIET IMPORTED_TARGET mysqlclient)
    set_target_properties(libsql PROPERTIES
      INTERFACE_LINK_LIBRARIES PkgConfig::MYSQL
      INTERFACE_INCLUDE_DIRECTORIES ${MYSQL_INCLUDEDIR}/..
    )
  else()
    set_target_properties(libsql PROPERTIES
      INTERFACE_LINK_LIBRARIES mysqlclient
    )
  endif()
endif()
