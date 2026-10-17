#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__ReadMotorAngles_Request__init(msg: *mut ReadMotorAngles_Request) -> bool;
    fn robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Request>);
    fn robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReadMotorAngles_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__ReadMotorAngles_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadMotorAngles_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ReadMotorAngles_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__ReadMotorAngles_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__ReadMotorAngles_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReadMotorAngles_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReadMotorAngles_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReadMotorAngles_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/ReadMotorAngles_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__ReadMotorAngles_Response__init(msg: *mut ReadMotorAngles_Response) -> bool;
    fn robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Response>);
    fn robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReadMotorAngles_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReadMotorAngles_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__ReadMotorAngles_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadMotorAngles_Response {
    /// Current angles of all 6 motors in degrees
    pub angles: [f64; 6],

    /// True if reading was successful
    pub success: bool,

    /// Error message if reading failed
    pub message: rosidl_runtime_rs::String,

}



impl Default for ReadMotorAngles_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__ReadMotorAngles_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__ReadMotorAngles_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReadMotorAngles_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ReadMotorAngles_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReadMotorAngles_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReadMotorAngles_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/ReadMotorAngles_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__GripperControl_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__GripperControl_Request__init(msg: *mut GripperControl_Request) -> bool;
    fn robot_arm_interfaces__srv__GripperControl_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__GripperControl_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Request>);
    fn robot_arm_interfaces__srv__GripperControl_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperControl_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__GripperControl_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperControl_Request {
    /// True for gripper_on, False for gripper_off
    pub enable: bool,

}



impl Default for GripperControl_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__GripperControl_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__GripperControl_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperControl_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperControl_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperControl_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/GripperControl_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__GripperControl_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__GripperControl_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__GripperControl_Response__init(msg: *mut GripperControl_Response) -> bool;
    fn robot_arm_interfaces__srv__GripperControl_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__GripperControl_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Response>);
    fn robot_arm_interfaces__srv__GripperControl_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperControl_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperControl_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__GripperControl_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperControl_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: rosidl_runtime_rs::String,

}



impl Default for GripperControl_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__GripperControl_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__GripperControl_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperControl_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__GripperControl_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperControl_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperControl_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/GripperControl_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__GripperControl_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ServoGripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__ServoGripper_Request__init(msg: *mut ServoGripper_Request) -> bool;
    fn robot_arm_interfaces__srv__ServoGripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__ServoGripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Request>);
    fn robot_arm_interfaces__srv__ServoGripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoGripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__ServoGripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoGripper_Request {
    /// Gripper angle (0-110 degrees)
    pub angle: i32,

}



impl Default for ServoGripper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__ServoGripper_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__ServoGripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoGripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoGripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoGripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/ServoGripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ServoGripper_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ServoGripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__ServoGripper_Response__init(msg: *mut ServoGripper_Response) -> bool;
    fn robot_arm_interfaces__srv__ServoGripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__ServoGripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Response>);
    fn robot_arm_interfaces__srv__ServoGripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoGripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoGripper_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__ServoGripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoGripper_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: rosidl_runtime_rs::String,

    /// The actual angle set (clamped to 0-110 range)
    pub actual_angle: i32,

}



impl Default for ServoGripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__ServoGripper_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__ServoGripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoGripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__ServoGripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoGripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoGripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/ServoGripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__ServoGripper_Response() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__SetFreeMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__SetFreeMode_Request__init(msg: *mut SetFreeMode_Request) -> bool;
    fn robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Request>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Request>);
    fn robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFreeMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Request>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__SetFreeMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFreeMode_Request {
    /// True (1) for free mode, False (0) for locked mode
    pub enable: bool,

}



impl Default for SetFreeMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__SetFreeMode_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__SetFreeMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFreeMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFreeMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFreeMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/SetFreeMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__SetFreeMode_Request() }
  }
}


#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__SetFreeMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn robot_arm_interfaces__srv__SetFreeMode_Response__init(msg: *mut SetFreeMode_Response) -> bool;
    fn robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Response>, size: usize) -> bool;
    fn robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Response>);
    fn robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFreeMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFreeMode_Response>) -> bool;
}

// Corresponds to robot_arm_interfaces__srv__SetFreeMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFreeMode_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetFreeMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_arm_interfaces__srv__SetFreeMode_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_arm_interfaces__srv__SetFreeMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFreeMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_arm_interfaces__srv__SetFreeMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFreeMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFreeMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_arm_interfaces/srv/SetFreeMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_arm_interfaces__srv__SetFreeMode_Response() }
  }
}






#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__srv__ReadMotorAngles
#[allow(missing_docs, non_camel_case_types)]
pub struct ReadMotorAngles;

impl rosidl_runtime_rs::Service for ReadMotorAngles {
    type Request = ReadMotorAngles_Request;
    type Response = ReadMotorAngles_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__ReadMotorAngles() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__GripperControl() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__srv__GripperControl
#[allow(missing_docs, non_camel_case_types)]
pub struct GripperControl;

impl rosidl_runtime_rs::Service for GripperControl {
    type Request = GripperControl_Request;
    type Response = GripperControl_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__GripperControl() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__ServoGripper() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__srv__ServoGripper
#[allow(missing_docs, non_camel_case_types)]
pub struct ServoGripper;

impl rosidl_runtime_rs::Service for ServoGripper {
    type Request = ServoGripper_Request;
    type Response = ServoGripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__ServoGripper() }
    }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__SetFreeMode() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__srv__SetFreeMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetFreeMode;

impl rosidl_runtime_rs::Service for SetFreeMode {
    type Request = SetFreeMode_Request;
    type Response = SetFreeMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_arm_interfaces__srv__SetFreeMode() }
    }
}


