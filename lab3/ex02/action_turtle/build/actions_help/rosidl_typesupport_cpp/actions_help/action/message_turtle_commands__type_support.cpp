// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from actions_help:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "actions_help/action/detail/message_turtle_commands__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Goal_type_support_ids_t;

static const _MessageTurtleCommands_Goal_type_support_ids_t _MessageTurtleCommands_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Goal_type_support_symbol_names_t _MessageTurtleCommands_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_Goal)),
  }
};

typedef struct _MessageTurtleCommands_Goal_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Goal_type_support_data_t;

static _MessageTurtleCommands_Goal_type_support_data_t _MessageTurtleCommands_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Goal_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Goal>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_Goal)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Result_type_support_ids_t;

static const _MessageTurtleCommands_Result_type_support_ids_t _MessageTurtleCommands_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Result_type_support_symbol_names_t _MessageTurtleCommands_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_Result)),
  }
};

typedef struct _MessageTurtleCommands_Result_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Result_type_support_data_t;

static _MessageTurtleCommands_Result_type_support_data_t _MessageTurtleCommands_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Result_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Result>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_Result)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Feedback_type_support_ids_t;

static const _MessageTurtleCommands_Feedback_type_support_ids_t _MessageTurtleCommands_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Feedback_type_support_symbol_names_t _MessageTurtleCommands_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_Feedback)),
  }
};

typedef struct _MessageTurtleCommands_Feedback_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Feedback_type_support_data_t;

static _MessageTurtleCommands_Feedback_type_support_data_t _MessageTurtleCommands_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Feedback_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Feedback>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_Feedback)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_Request_type_support_ids_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Request)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_data_t;

static _MessageTurtleCommands_SendGoal_Request_type_support_data_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_SendGoal_Request>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Request)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_Response_type_support_ids_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Response)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_data_t;

static _MessageTurtleCommands_SendGoal_Response_type_support_data_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_SendGoal_Response>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_SendGoal_Response)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_type_support_ids_t _MessageTurtleCommands_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_SendGoal)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_type_support_data_t;

static _MessageTurtleCommands_SendGoal_type_support_data_t _MessageTurtleCommands_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_service_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MessageTurtleCommands_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<actions_help::action::MessageTurtleCommands_SendGoal>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_Request_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_Request_type_support_ids_t _MessageTurtleCommands_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t _MessageTurtleCommands_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_GetResult_Request)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_Request_type_support_data_t;

static _MessageTurtleCommands_GetResult_Request_type_support_data_t _MessageTurtleCommands_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_Request_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_GetResult_Request>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_GetResult_Request)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_Response_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_Response_type_support_ids_t _MessageTurtleCommands_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t _MessageTurtleCommands_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_GetResult_Response)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_Response_type_support_data_t;

static _MessageTurtleCommands_GetResult_Response_type_support_data_t _MessageTurtleCommands_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_Response_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_GetResult_Response>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_GetResult_Response)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_type_support_ids_t _MessageTurtleCommands_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_type_support_symbol_names_t _MessageTurtleCommands_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_GetResult)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_type_support_data_t;

static _MessageTurtleCommands_GetResult_type_support_data_t _MessageTurtleCommands_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_service_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MessageTurtleCommands_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<actions_help::action::MessageTurtleCommands_GetResult>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_ids_t;

static const _MessageTurtleCommands_FeedbackMessage_type_support_ids_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, actions_help, action, MessageTurtleCommands_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actions_help, action, MessageTurtleCommands_FeedbackMessage)),
  }
};

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_data_t;

static _MessageTurtleCommands_FeedbackMessage_type_support_data_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_map = {
  2,
  "actions_help",
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actions_help::action::MessageTurtleCommands_FeedbackMessage>()
{
  return &::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, actions_help, action, MessageTurtleCommands_FeedbackMessage)() {
  return get_message_type_support_handle<actions_help::action::MessageTurtleCommands_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "actions_help/action/detail/message_turtle_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace actions_help
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MessageTurtleCommands_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace actions_help

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<actions_help::action::MessageTurtleCommands>()
{
  using ::actions_help::action::rosidl_typesupport_cpp::MessageTurtleCommands_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MessageTurtleCommands_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::actions_help::action::MessageTurtleCommands::Impl::SendGoalService>();
  MessageTurtleCommands_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::actions_help::action::MessageTurtleCommands::Impl::GetResultService>();
  MessageTurtleCommands_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::actions_help::action::MessageTurtleCommands::Impl::CancelGoalService>();
  MessageTurtleCommands_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::actions_help::action::MessageTurtleCommands::Impl::FeedbackMessage>();
  MessageTurtleCommands_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::actions_help::action::MessageTurtleCommands::Impl::GoalStatusMessage>();
  return &MessageTurtleCommands_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
