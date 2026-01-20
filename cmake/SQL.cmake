include(FetchContent)
  set(SQL_REPO "https://github.com/mysql/mysql-server")
  set(SQL_TAG "mysql-8.4.7")
  set(FETCHCONTENT_QUIET OFF)
  set(FETCHCONTENT_BASE_DIR ${EXT_DOWNLOAD_DIR})
  set(WITHOUT_SERVER ON)
  set(WITH_BOOST ${POL_EXT_LIB_DIR}/boost_1_89_0)
  set(WITH_UNIT_TESTS OFF)
  FetchContent_Declare(
    mysqlclient
    GIT_REPOSITORY ${SQL_REPO}
    GIT_TAG ${SQL_TAG}
    GIT_SHALLOW TRUE
  )
  FetchContent_MakeAvailable(mysqlclient)
  add_library(libsql SHARED IMPORTED)
  add_dependencies(libsql mysqlclient)
    set_target_properties(libsql PROPERTIES
      INTERFACE_LINK_LIBRARIES mysqlclient
    )
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
