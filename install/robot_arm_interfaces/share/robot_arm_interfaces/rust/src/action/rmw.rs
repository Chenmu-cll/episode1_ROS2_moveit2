
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_Goal__init(msg: *mut AngleMode_Goal) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Goal>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Goal>);
    fn robot_arm_interfaces__action__AngleMode_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Goal>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Goal {
    /// Target angles for 6 motors (degrees)
    pub angles: [f64; 6],

    /// Speed ratio (0.0 to 1.0)
    pub speed_ratio: f64,

}



impl Default for AngleMode_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Goal() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_Result__init(msg: *mut AngleMode_Result) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Result>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Result>);
    fn robot_arm_interfaces__action__AngleMode_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Result>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Result {
    /// True if movement successful
    pub success: bool,

    /// Error message or success info
    pub message: rosidl_runtime_rs::String,

    /// How long the movement took
    pub execution_time: f64,

    /// Final angles achieved
    pub final_angles: [f64; 6],

}



impl Default for AngleMode_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Result() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_Feedback__init(msg: *mut AngleMode_Feedback) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Feedback>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Feedback>);
    fn robot_arm_interfaces__action__AngleMode_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_Feedback>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Feedback {
    /// Time elapsed since start
    pub elapsed_time: f64,

    /// Movement progress (0.0 to 1.0)
    pub progress: f64,

    /// Current motor angles
    pub current_angles: [f64; 6],

    /// Human-readable status
    pub status_message: rosidl_runtime_rs::String,

}



impl Default for AngleMode_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_Feedback() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_FeedbackMessage__init(msg: *mut AngleMode_FeedbackMessage) -> bool;
    fn robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_FeedbackMessage>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_FeedbackMessage>);
    fn robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_FeedbackMessage>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::AngleMode_Feedback,

}



impl Default for AngleMode_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_FeedbackMessage() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_Goal__init(msg: *mut MoveXyzRotation_Goal) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Goal>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Goal>);
    fn robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Goal>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Goal {
    /// Target position [x, y, z] in mm
    pub position: [f64; 3],

    /// Target rotation [rx, ry, rz] in degrees
    pub rotation: [f64; 3],

    /// IK mode selection ("xyz" or "zyx")
    pub ik_mode: rosidl_runtime_rs::String,

    /// Speed ratio (0.0 to 1.0)
    pub speed_ratio: f64,

}



impl Default for MoveXyzRotation_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Goal() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_Result__init(msg: *mut MoveXyzRotation_Result) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Result>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Result>);
    fn robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Result>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Result {
    /// True if movement successful
    pub success: bool,

    /// Error message or success info
    pub message: rosidl_runtime_rs::String,

    /// How long the movement took
    pub execution_time: f64,

    /// IK solution angles (degrees)
    pub solution_angles: [f64; 6],

    /// Final position achieved
    pub final_position: [f64; 3],

    /// Final rotation achieved
    pub final_rotation: [f64; 3],

}



impl Default for MoveXyzRotation_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Result() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_Feedback__init(msg: *mut MoveXyzRotation_Feedback) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Feedback>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Feedback>);
    fn robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_Feedback>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Feedback {
    /// Time elapsed since start
    pub elapsed_time: f64,

    /// Movement progress (0.0 to 1.0)
    pub progress: f64,

    /// Current motor angles
    pub current_angles: [f64; 6],

    /// Human-readable status
    pub status_message: rosidl_runtime_rs::String,

}



impl Default for MoveXyzRotation_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_Feedback() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__init(msg: *mut MoveXyzRotation_FeedbackMessage) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_FeedbackMessage>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_FeedbackMessage>);
    fn robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_FeedbackMessage>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveXyzRotation_Feedback,

}



impl Default for MoveXyzRotation_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_Goal__init(msg: *mut LinearMove_Goal) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Goal>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Goal>);
    fn robot_arm_interfaces__action__LinearMove_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Goal>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_Goal {
    /// Target position [x, y, z] in mm
    pub position: [f64; 3],

    /// Target rotation [rx, ry, rz] in degrees
    pub rotation: [f64; 3],

    /// Rotation mode: 'xyz' or 'zyx', default: 'zyx'
    pub rotation_mode: rosidl_runtime_rs::String,

    /// Step size for interpolation in mm, default: 8.0
    pub step_size: f64,

}



impl Default for LinearMove_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Goal() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_Result__init(msg: *mut LinearMove_Result) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Result>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Result>);
    fn robot_arm_interfaces__action__LinearMove_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Result>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_Result {
    /// True if linear movement was successful
    pub success: bool,

    /// Status or error message
    pub message: rosidl_runtime_rs::String,

    /// Total execution time in seconds
    pub execution_time: f64,

    /// Total number of interpolation steps executed
    pub total_steps: i32,

}



impl Default for LinearMove_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Result() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_Feedback__init(msg: *mut LinearMove_Feedback) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Feedback>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Feedback>);
    fn robot_arm_interfaces__action__LinearMove_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_Feedback>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_Feedback {
    /// Time elapsed since start
    pub elapsed_time: f64,

    /// Movement progress (0.0 to 1.0)
    pub progress: f64,

    /// Current step number
    pub current_step: i32,

    /// Total number of steps
    pub total_steps: i32,

    /// Current motor angles
    pub current_angles: [f64; 6],

    /// Human-readable status
    pub status_message: rosidl_runtime_rs::String,

}



impl Default for LinearMove_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_Feedback() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_FeedbackMessage__init(msg: *mut LinearMove_FeedbackMessage) -> bool;
    fn robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_FeedbackMessage>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_FeedbackMessage>);
    fn robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_FeedbackMessage>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::LinearMove_Feedback,

}



impl Default for LinearMove_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_FeedbackMessage() }
  }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Request__init(msg: *mut AngleMode_SendGoal_Request) -> bool;
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Request>);
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::AngleMode_Goal,

}



impl Default for AngleMode_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Response__init(msg: *mut AngleMode_SendGoal_Response) -> bool;
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Response>);
    fn robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_SendGoal_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for AngleMode_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_GetResult_Request__init(msg: *mut AngleMode_GetResult_Request) -> bool;
    fn robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Request>);
    fn robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for AngleMode_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__AngleMode_GetResult_Response__init(msg: *mut AngleMode_GetResult_Response) -> bool;
    fn robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Response>);
    fn robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AngleMode_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AngleMode_GetResult_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::AngleMode_Result,

}



impl Default for AngleMode_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__AngleMode_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__AngleMode_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AngleMode_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AngleMode_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AngleMode_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/AngleMode_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__init(msg: *mut MoveXyzRotation_SendGoal_Request) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Request>);
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveXyzRotation_Goal,

}



impl Default for MoveXyzRotation_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__init(msg: *mut MoveXyzRotation_SendGoal_Response) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Response>);
    fn robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_SendGoal_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveXyzRotation_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__init(msg: *mut MoveXyzRotation_GetResult_Request) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Request>);
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveXyzRotation_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__init(msg: *mut MoveXyzRotation_GetResult_Response) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Response>);
    fn robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveXyzRotation_GetResult_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveXyzRotation_Result,

}



impl Default for MoveXyzRotation_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveXyzRotation_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveXyzRotation_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/MoveXyzRotation_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Request__init(msg: *mut LinearMove_SendGoal_Request) -> bool;
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Request>);
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::LinearMove_Goal,

}



impl Default for LinearMove_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Response__init(msg: *mut LinearMove_SendGoal_Response) -> bool;
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Response>);
    fn robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_SendGoal_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for LinearMove_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_GetResult_Request__init(msg: *mut LinearMove_GetResult_Request) -> bool;
    fn robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Request>);
    fn robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for LinearMove_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__action__LinearMove_GetResult_Response__init(msg: *mut LinearMove_GetResult_Response) -> bool;
    fn robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Response>);
    fn robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMove_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMove_GetResult_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::LinearMove_Result,

}



impl Default for LinearMove_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__action__LinearMove_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__action__LinearMove_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMove_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__action__LinearMove_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMove_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMove_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/action/LinearMove_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult_Response() }
  }
}






#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct AngleMode_SendGoal;

impl rosidl_runtime_rs::Service for AngleMode_SendGoal {
    type Request = AngleMode_SendGoal_Request;
    type Response = AngleMode_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__AngleMode_SendGoal() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__AngleMode_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct AngleMode_GetResult;

impl rosidl_runtime_rs::Service for AngleMode_GetResult {
    type Request = AngleMode_GetResult_Request;
    type Response = AngleMode_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__AngleMode_GetResult() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveXyzRotation_SendGoal;

impl rosidl_runtime_rs::Service for MoveXyzRotation_SendGoal {
    type Request = MoveXyzRotation_SendGoal_Request;
    type Response = MoveXyzRotation_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_SendGoal() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveXyzRotation_GetResult;

impl rosidl_runtime_rs::Service for MoveXyzRotation_GetResult {
    type Request = MoveXyzRotation_GetResult_Request;
    type Response = MoveXyzRotation_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation_GetResult() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct LinearMove_SendGoal;

impl rosidl_runtime_rs::Service for LinearMove_SendGoal {
    type Request = LinearMove_SendGoal_Request;
    type Response = LinearMove_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__LinearMove_SendGoal() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__LinearMove_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct LinearMove_GetResult;

impl rosidl_runtime_rs::Service for LinearMove_GetResult {
    type Request = LinearMove_GetResult_Request;
    type Response = LinearMove_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__action__LinearMove_GetResult() }
    }
}


