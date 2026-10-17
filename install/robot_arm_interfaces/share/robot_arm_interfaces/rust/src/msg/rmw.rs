#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__msg__MotorAngles() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__msg__MotorAngles__init(msg: *mut MotorAngles) -> bool;
    fn robot_arm_interfaces__msg__MotorAngles__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorAngles>, size: usize) -> bool;
    fn robot_arm_interfaces__msg__MotorAngles__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorAngles>);
    fn robot_arm_interfaces__msg__MotorAngles__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorAngles>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorAngles>) -> bool;
}

// Corresponds to robot_arm_interfaces__msg__MotorAngles
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Motor angles message for publishing current motor positions
/// Array of 6 motor angles in degrees

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorAngles {

    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: [f64; 6],

    /// Timestamp when the angles were read
    pub timestamp: builtin_interfaces::msg::rmw::Time,

    /// Success flag indicating if the reading was successful
    pub success: bool,

    /// Optional message for additional information
    pub message: rosidl_runtime_rs::String,

}



impl Default for MotorAngles {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__msg__MotorAngles__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__msg__MotorAngles__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorAngles {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__msg__MotorAngles__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__msg__MotorAngles__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__msg__MotorAngles__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorAngles {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorAngles where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/msg/MotorAngles";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__msg__MotorAngles() }
  }
}


