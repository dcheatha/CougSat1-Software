/**
 * @file Protocol.hpp
 * @author D. Cheatham
 * @date 11 October 2020
 * @brief I2C Message Class
 */

namespace I2C {
  /**
   * @brief List of subsystems on the satellite. Interger representation should be
   * the I2C address of the subsystem.
   */
  enum Subsystem {
    ADCS = 0x0,
    IFJR = 0x1E,
    IHU,
    PMIC,
    Comms,
    Payload1,
    Payload2,
    Payload3,
    Development = 0xFF
  };

}  // namespace I2C