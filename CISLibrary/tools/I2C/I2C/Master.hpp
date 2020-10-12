/**
 * @file Master.hpp
 * @author D. Cheatham
 * @date 11 October 2020
 * @brief I2C Master Class
 */

#include "Message.hpp"

#include <I2C.h>
#include <mbed.h>

namespace I2C {
  class Master {
  public:
    /**
     * @brief Construct a new I2C Master object
     *
     * @param sda Data line
     * @param scl Clock line
     */
    Master(PinName sda, PinName scl);

    /**
     * @brief Destroy the I2C Master object
     */
    ~Master();

    /**
     * @brief Write an I2C message
     *
     * @param message Message Object to write from
     * @return mbed_error_type_t
     */
    mbed_error_type_t Write(Message& message);

    /**
     * @brief Read an I2C message
     *
     * @param message Message Object to read into
     * @return mbed_error_type_t
     */
    mbed_error_type_t Read(Message& message);
  };
}  // namespace I2C