/**
 * @file Slave.h
 * @author D. Cheatham
 * @date 11 October 2020
 * @brief I2C Slave Class
 */

#include "Message.hpp"

#include <I2C.h>
#include <mbed.h>

namespace I2C {
  enum SlaveState {
    Idle,
    ShouldRead,
    ShouldWrite,
  };

  class Slave {
    Subsystem subsystem;
    bool      read_req  = false;
    bool      write_req = false;

  public:
    /**
     * @brief Construct a new I2C Slave object
     *
     * @param subsystem I2C Slave Subsystem
     * @param sda Data line
     * @param scl Clock line
     */
    Slave(Subsystem subystem, PinName sda, PinName scl);

    /**
     * @brief Destroy the I2C Slave object
     */
    ~Slave();

    /**
     * @brief Processes the I2C Slave controller and returns its state.
     *
     * @return SlaveState
     */
    SlaveState Process();

    /**
     * @brief Write an I2C message to the master. This must *only* be done when SlaveState is
     * ShouldWrite.
     *
     * @param message Message Object to write from
     * @return mbed_error_type_t
     */
    mbed_error_type_t Write(Message& message);

    /**
     * @brief Read an I2C message from the master. This must *only* be done with SlaveState is
     * ShouldRead.
     *
     * @param message Message Object to read into
     * @return mbed_error_type_t
     */
    mbed_error_type_t Read(Message& message);
  };
}  // namespace I2C