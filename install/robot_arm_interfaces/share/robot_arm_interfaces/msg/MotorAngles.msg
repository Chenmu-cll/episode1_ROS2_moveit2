# Motor angles message for publishing current motor positions
# Array of 6 motor angles in degrees
float64[6] angles

# Timestamp when the angles were read
builtin_interfaces/Time timestamp

# Success flag indicating if the reading was successful
bool success

# Optional message for additional information
string message