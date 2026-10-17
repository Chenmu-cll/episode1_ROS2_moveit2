# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target robot_arm_interfaces::robot_arm_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${robot_arm_interfaces_TARGETS}.
if(robot_arm_interfaces_TARGETS AND NOT TARGET robot_arm_interfaces::robot_arm_interfaces)
  add_library(robot_arm_interfaces::robot_arm_interfaces INTERFACE IMPORTED)
  set_target_properties(robot_arm_interfaces::robot_arm_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${robot_arm_interfaces_TARGETS}")
endif()
