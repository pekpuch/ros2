# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_actions_help_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED actions_help_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(actions_help_FOUND FALSE)
  elseif(NOT actions_help_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(actions_help_FOUND FALSE)
  endif()
  return()
endif()
set(_actions_help_CONFIG_INCLUDED TRUE)

# output package information
if(NOT actions_help_FIND_QUIETLY)
  message(STATUS "Found actions_help: 0.0.0 (${actions_help_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'actions_help' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${actions_help_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(actions_help_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${actions_help_DIR}/${_extra}")
endforeach()
