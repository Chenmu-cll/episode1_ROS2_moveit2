#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robot_arm_interfaces__srv__ReadMotorAngles_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadMotorAngles_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ReadMotorAngles_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ReadMotorAngles_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ReadMotorAngles_Request {
  type RmwMsg = super::srv::rmw::ReadMotorAngles_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__ReadMotorAngles_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReadMotorAngles_Response {
    /// Current angles of all 6 motors in degrees
    pub angles: [f64; 6],

    /// True if reading was successful
    pub success: bool,

    /// Error message if reading failed
    pub message: std::string::String,

}



impl Default for ReadMotorAngles_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ReadMotorAngles_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ReadMotorAngles_Response {
  type RmwMsg = super::srv::rmw::ReadMotorAngles_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      angles: msg.angles,
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__GripperControl_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperControl_Request {
    /// True for gripper_on, False for gripper_off
    pub enable: bool,

}



impl Default for GripperControl_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperControl_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripperControl_Request {
  type RmwMsg = super::srv::rmw::GripperControl_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__GripperControl_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperControl_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: std::string::String,

}



impl Default for GripperControl_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperControl_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripperControl_Response {
  type RmwMsg = super::srv::rmw::GripperControl_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__ServoGripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoGripper_Request {
    /// Gripper angle (0-110 degrees)
    pub angle: i32,

}



impl Default for ServoGripper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ServoGripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ServoGripper_Request {
  type RmwMsg = super::srv::rmw::ServoGripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angle: msg.angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      angle: msg.angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      angle: msg.angle,
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__ServoGripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoGripper_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: std::string::String,

    /// The actual angle set (clamped to 0-110 range)
    pub actual_angle: i32,

}



impl Default for ServoGripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ServoGripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ServoGripper_Response {
  type RmwMsg = super::srv::rmw::ServoGripper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        actual_angle: msg.actual_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      actual_angle: msg.actual_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      actual_angle: msg.actual_angle,
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__SetFreeMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFreeMode_Request {
    /// True (1) for free mode, False (0) for locked mode
    pub enable: bool,

}



impl Default for SetFreeMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFreeMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetFreeMode_Request {
  type RmwMsg = super::srv::rmw::SetFreeMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
    }
  }
}


// Corresponds to robot_arm_interfaces__srv__SetFreeMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFreeMode_Response {
    /// True if operation was successful
    pub success: bool,

    /// Status message or error description
    pub message: std::string::String,

}



impl Default for SetFreeMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetFreeMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetFreeMode_Response {
  type RmwMsg = super::srv::rmw::SetFreeMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


