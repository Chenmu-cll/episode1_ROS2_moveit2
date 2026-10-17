
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_arm_interfaces__action__AngleMode_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Goal {
    /// Target angles for 6 motors (degrees)
    pub angles: [f64; 6],

    /// Speed ratio (0.0 to 1.0)
    pub speed_ratio: f64,

}



impl Default for AngleMode_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Goal {
  type RmwMsg = super::action::rmw::AngleMode_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
        speed_ratio: msg.speed_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        angles: msg.angles,
      speed_ratio: msg.speed_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      angles: msg.angles,
      speed_ratio: msg.speed_ratio,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Result {
    /// True if movement successful
    pub success: bool,

    /// Error message or success info
    pub message: std::string::String,

    /// How long the movement took
    pub execution_time: f64,

    /// Final angles achieved
    pub final_angles: [f64; 6],

}



impl Default for AngleMode_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_Result::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Result {
  type RmwMsg = super::action::rmw::AngleMode_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        execution_time: msg.execution_time,
        final_angles: msg.final_angles,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      execution_time: msg.execution_time,
        final_angles: msg.final_angles,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      execution_time: msg.execution_time,
      final_angles: msg.final_angles,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_Feedback {
    /// Time elapsed since start
    pub elapsed_time: f64,

    /// Movement progress (0.0 to 1.0)
    pub progress: f64,

    /// Current motor angles
    pub current_angles: [f64; 6],

    /// Human-readable status
    pub status_message: std::string::String,

}



impl Default for AngleMode_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_Feedback {
  type RmwMsg = super::action::rmw::AngleMode_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed_time: msg.elapsed_time,
        progress: msg.progress,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
      current_angles: msg.current_angles,
      status_message: msg.status_message.to_string(),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::AngleMode_Feedback,

}



impl Default for AngleMode_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_FeedbackMessage {
  type RmwMsg = super::action::rmw::AngleMode_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::AngleMode_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::AngleMode_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::AngleMode_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Goal {
    /// Target position [x, y, z] in mm
    pub position: [f64; 3],

    /// Target rotation [rx, ry, rz] in degrees
    pub rotation: [f64; 3],

    /// IK mode selection ("xyz" or "zyx")
    pub ik_mode: std::string::String,

    /// Speed ratio (0.0 to 1.0)
    pub speed_ratio: f64,

}



impl Default for MoveXyzRotation_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Goal {
  type RmwMsg = super::action::rmw::MoveXyzRotation_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        rotation: msg.rotation,
        ik_mode: msg.ik_mode.as_str().into(),
        speed_ratio: msg.speed_ratio,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        rotation: msg.rotation,
        ik_mode: msg.ik_mode.as_str().into(),
      speed_ratio: msg.speed_ratio,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      rotation: msg.rotation,
      ik_mode: msg.ik_mode.to_string(),
      speed_ratio: msg.speed_ratio,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Result {
    /// True if movement successful
    pub success: bool,

    /// Error message or success info
    pub message: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_Result::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Result {
  type RmwMsg = super::action::rmw::MoveXyzRotation_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        execution_time: msg.execution_time,
        solution_angles: msg.solution_angles,
        final_position: msg.final_position,
        final_rotation: msg.final_rotation,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      execution_time: msg.execution_time,
        solution_angles: msg.solution_angles,
        final_position: msg.final_position,
        final_rotation: msg.final_rotation,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      execution_time: msg.execution_time,
      solution_angles: msg.solution_angles,
      final_position: msg.final_position,
      final_rotation: msg.final_rotation,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_Feedback {
    /// Time elapsed since start
    pub elapsed_time: f64,

    /// Movement progress (0.0 to 1.0)
    pub progress: f64,

    /// Current motor angles
    pub current_angles: [f64; 6],

    /// Human-readable status
    pub status_message: std::string::String,

}



impl Default for MoveXyzRotation_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_Feedback {
  type RmwMsg = super::action::rmw::MoveXyzRotation_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed_time: msg.elapsed_time,
        progress: msg.progress,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
      current_angles: msg.current_angles,
      status_message: msg.status_message.to_string(),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::MoveXyzRotation_Feedback,

}



impl Default for MoveXyzRotation_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_FeedbackMessage {
  type RmwMsg = super::action::rmw::MoveXyzRotation_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::MoveXyzRotation_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::MoveXyzRotation_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::MoveXyzRotation_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_Goal {
    /// Target position [x, y, z] in mm
    pub position: [f64; 3],

    /// Target rotation [rx, ry, rz] in degrees
    pub rotation: [f64; 3],

    /// Rotation mode: 'xyz' or 'zyx', default: 'zyx'
    pub rotation_mode: std::string::String,

    /// Step size for interpolation in mm, default: 8.0
    pub step_size: f64,

}



impl Default for LinearMove_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Goal {
  type RmwMsg = super::action::rmw::LinearMove_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        rotation: msg.rotation,
        rotation_mode: msg.rotation_mode.as_str().into(),
        step_size: msg.step_size,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        rotation: msg.rotation,
        rotation_mode: msg.rotation_mode.as_str().into(),
      step_size: msg.step_size,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      rotation: msg.rotation,
      rotation_mode: msg.rotation_mode.to_string(),
      step_size: msg.step_size,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_Result {
    /// True if linear movement was successful
    pub success: bool,

    /// Status or error message
    pub message: std::string::String,

    /// Total execution time in seconds
    pub execution_time: f64,

    /// Total number of interpolation steps executed
    pub total_steps: i32,

}



impl Default for LinearMove_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_Result::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Result {
  type RmwMsg = super::action::rmw::LinearMove_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        execution_time: msg.execution_time,
        total_steps: msg.total_steps,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      execution_time: msg.execution_time,
      total_steps: msg.total_steps,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      execution_time: msg.execution_time,
      total_steps: msg.total_steps,
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub status_message: std::string::String,

}



impl Default for LinearMove_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_Feedback {
  type RmwMsg = super::action::rmw::LinearMove_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed_time: msg.elapsed_time,
        progress: msg.progress,
        current_step: msg.current_step,
        total_steps: msg.total_steps,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
      current_step: msg.current_step,
      total_steps: msg.total_steps,
        current_angles: msg.current_angles,
        status_message: msg.status_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed_time: msg.elapsed_time,
      progress: msg.progress,
      current_step: msg.current_step,
      total_steps: msg.total_steps,
      current_angles: msg.current_angles,
      status_message: msg.status_message.to_string(),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::LinearMove_Feedback,

}



impl Default for LinearMove_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_FeedbackMessage {
  type RmwMsg = super::action::rmw::LinearMove_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::LinearMove_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::LinearMove_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::LinearMove_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to robot_arm_interfaces__action__AngleMode_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::AngleMode_Goal,

}



impl Default for AngleMode_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_SendGoal_Request {
  type RmwMsg = super::action::rmw::AngleMode_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::AngleMode_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::AngleMode_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::AngleMode_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for AngleMode_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_SendGoal_Response {
  type RmwMsg = super::action::rmw::AngleMode_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for AngleMode_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_GetResult_Request {
  type RmwMsg = super::action::rmw::AngleMode_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__AngleMode_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AngleMode_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::AngleMode_Result,

}



impl Default for AngleMode_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::AngleMode_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AngleMode_GetResult_Response {
  type RmwMsg = super::action::rmw::AngleMode_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::AngleMode_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::AngleMode_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::AngleMode_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::MoveXyzRotation_Goal,

}



impl Default for MoveXyzRotation_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_SendGoal_Request {
  type RmwMsg = super::action::rmw::MoveXyzRotation_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::MoveXyzRotation_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::MoveXyzRotation_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::MoveXyzRotation_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MoveXyzRotation_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_SendGoal_Response {
  type RmwMsg = super::action::rmw::MoveXyzRotation_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for MoveXyzRotation_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_GetResult_Request {
  type RmwMsg = super::action::rmw::MoveXyzRotation_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveXyzRotation_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::MoveXyzRotation_Result,

}



impl Default for MoveXyzRotation_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveXyzRotation_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveXyzRotation_GetResult_Response {
  type RmwMsg = super::action::rmw::MoveXyzRotation_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::MoveXyzRotation_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::MoveXyzRotation_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::MoveXyzRotation_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::LinearMove_Goal,

}



impl Default for LinearMove_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_SendGoal_Request {
  type RmwMsg = super::action::rmw::LinearMove_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::LinearMove_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::LinearMove_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::LinearMove_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for LinearMove_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_SendGoal_Response {
  type RmwMsg = super::action::rmw::LinearMove_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for LinearMove_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_GetResult_Request {
  type RmwMsg = super::action::rmw::LinearMove_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robot_arm_interfaces__action__LinearMove_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMove_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::LinearMove_Result,

}



impl Default for LinearMove_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::LinearMove_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMove_GetResult_Response {
  type RmwMsg = super::action::rmw::LinearMove_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::LinearMove_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::LinearMove_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::LinearMove_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__AngleMode() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__AngleMode
#[allow(missing_docs, non_camel_case_types)]
pub struct AngleMode;

impl rosidl_runtime_rs::Action for AngleMode {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = AngleMode_Goal;

  /// The result message defined in the action definition.
  type Result = AngleMode_Result;

  /// The feedback message defined in the action definition.
  type Feedback = AngleMode_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::AngleMode_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::AngleMode_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::AngleMode_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__AngleMode() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::AngleMode_Goal,
  ) -> super::action::rmw::AngleMode_SendGoal_Request {
   super::action::rmw::AngleMode_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::AngleMode_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::AngleMode_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::AngleMode_SendGoal_Response {
   super::action::rmw::AngleMode_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::AngleMode_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::AngleMode_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::AngleMode_Feedback,
  ) -> super::action::rmw::AngleMode_FeedbackMessage {
    let mut message = super::action::rmw::AngleMode_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::AngleMode_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::AngleMode_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::AngleMode_GetResult_Request {
   super::action::rmw::AngleMode_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::AngleMode_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::AngleMode_Result,
  ) -> super::action::rmw::AngleMode_GetResult_Response {
   super::action::rmw::AngleMode_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::AngleMode_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::AngleMode_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__MoveXyzRotation
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveXyzRotation;

impl rosidl_runtime_rs::Action for MoveXyzRotation {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = MoveXyzRotation_Goal;

  /// The result message defined in the action definition.
  type Result = MoveXyzRotation_Result;

  /// The feedback message defined in the action definition.
  type Feedback = MoveXyzRotation_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::MoveXyzRotation_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::MoveXyzRotation_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::MoveXyzRotation_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__MoveXyzRotation() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::MoveXyzRotation_Goal,
  ) -> super::action::rmw::MoveXyzRotation_SendGoal_Request {
   super::action::rmw::MoveXyzRotation_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::MoveXyzRotation_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::MoveXyzRotation_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::MoveXyzRotation_SendGoal_Response {
   super::action::rmw::MoveXyzRotation_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::MoveXyzRotation_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::MoveXyzRotation_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::MoveXyzRotation_Feedback,
  ) -> super::action::rmw::MoveXyzRotation_FeedbackMessage {
    let mut message = super::action::rmw::MoveXyzRotation_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::MoveXyzRotation_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::MoveXyzRotation_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::MoveXyzRotation_GetResult_Request {
   super::action::rmw::MoveXyzRotation_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::MoveXyzRotation_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::MoveXyzRotation_Result,
  ) -> super::action::rmw::MoveXyzRotation_GetResult_Response {
   super::action::rmw::MoveXyzRotation_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::MoveXyzRotation_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::MoveXyzRotation_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "robot_arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__LinearMove() -> *const std::ffi::c_void;
}

// Corresponds to robot_arm_interfaces__action__LinearMove
#[allow(missing_docs, non_camel_case_types)]
pub struct LinearMove;

impl rosidl_runtime_rs::Action for LinearMove {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = LinearMove_Goal;

  /// The result message defined in the action definition.
  type Result = LinearMove_Result;

  /// The feedback message defined in the action definition.
  type Feedback = LinearMove_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::LinearMove_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::LinearMove_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::LinearMove_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robot_arm_interfaces__action__LinearMove() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::LinearMove_Goal,
  ) -> super::action::rmw::LinearMove_SendGoal_Request {
   super::action::rmw::LinearMove_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::LinearMove_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::LinearMove_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::LinearMove_SendGoal_Response {
   super::action::rmw::LinearMove_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::LinearMove_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::LinearMove_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::LinearMove_Feedback,
  ) -> super::action::rmw::LinearMove_FeedbackMessage {
    let mut message = super::action::rmw::LinearMove_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::LinearMove_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::LinearMove_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::LinearMove_GetResult_Request {
   super::action::rmw::LinearMove_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::LinearMove_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::LinearMove_Result,
  ) -> super::action::rmw::LinearMove_GetResult_Response {
   super::action::rmw::LinearMove_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::LinearMove_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::LinearMove_Result,
  ) {
    (response.status, response.result)
  }
}


