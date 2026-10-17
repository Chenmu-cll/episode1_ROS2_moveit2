#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_arm_interfaces__msg__MotorAngles
/// Motor angles message for publishing current motor positions
/// Array of 6 motor angles in degrees

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorAngles {

    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: [f64; 6],

    /// Timestamp when the angles were read
    pub timestamp: builtin_interfaces::msg::Time,

    /// Success flag indicating if the reading was successful
    pub success: bool,

    /// Optional message for additional information
    pub message: std::string::String,

}



impl Default for MotorAngles {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorAngles::default())
  }
}

impl rosidl_runtime_rs::Message for MotorAngles {
  type RmwMsg = super::msg::rmw::MotorAngles;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      angles: msg.angles,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


