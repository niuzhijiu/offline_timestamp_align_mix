// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_offline_timestamp_align_colcon __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_offline_timestamp_align_colcon __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_offline_timestamp_align_colcon __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_offline_timestamp_align_colcon __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_offline_timestamp_align_colcon
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_offline_timestamp_align_colcon ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_offline_timestamp_align_colcon
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_offline_timestamp_align_colcon ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_offline_timestamp_align_colcon
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_offline_timestamp_align_colcon __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_offline_timestamp_align_colcon
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_offline_timestamp_align_colcon __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_offline_timestamp_align_colcon
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
