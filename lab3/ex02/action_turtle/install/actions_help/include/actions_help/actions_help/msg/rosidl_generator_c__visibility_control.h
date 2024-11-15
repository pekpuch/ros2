// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ACTIONS_HELP__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ACTIONS_HELP__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_actions_help __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_actions_help __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_actions_help __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_actions_help __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_actions_help
    #define ROSIDL_GENERATOR_C_PUBLIC_actions_help ROSIDL_GENERATOR_C_EXPORT_actions_help
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_actions_help ROSIDL_GENERATOR_C_IMPORT_actions_help
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_actions_help __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_actions_help
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_actions_help __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_actions_help
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ACTIONS_HELP__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
