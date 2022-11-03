#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trial_interface::trial_interface__rosidl_typesupport_c" for configuration ""
set_property(TARGET trial_interface::trial_interface__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trial_interface::trial_interface__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtrial_interface__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libtrial_interface__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trial_interface::trial_interface__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_trial_interface::trial_interface__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libtrial_interface__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
