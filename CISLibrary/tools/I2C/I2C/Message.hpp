/**
 * @file Message.hpp
 * @author D. Cheatham
 * @date 11 October 2020
 * @brief I2C Message Class
 */

#include "Protocol.hpp"

#include <iostream>
#include <stdint.h>

namespace I2C {
  class Message {
    Subsystem subsystem;
    int8_t    command     = -1;
    void*     data        = nullptr;
    uint32_t  data_length = 0;
    uint32_t  crc         = 0;

    /**
     * @brief Calculates the CRC and updates the value. This calculation is done during render, and
     * is computed on the entire I2C message; this includes the headers.
     */
    void CalculateCRC();

  public:
    /**
     * @brief Set the Subsystem
     *
     * @param subsystem
     */
    void SetSubsystem(Subsystem subsystem);

    /**
     * @brief Get the Subsystem
     *
     * @return Subsystem
     */
    Subsystem GetSubsystem();

    /**
     * @brief Set the Command byte
     *
     * @param command
     */
    void SetCommand(int8_t command);

    /**
     * @brief Get the Command byte
     *
     * @return int8_t
     */
    int8_t GetCommand();

    /**
     * @brief Set the Data object
     *
     * @param data
     */
    void SetData(void* data);

    /**
     * @brief Get the Data pointer
     *
     * @return void*
     */
    void* GetData();

    /**
     * @brief Set the Data Length in bytes
     *
     * @param length
     */
    void SetDataLength(uint32_t length);

    /**
     * @brief Get the Data Length in Bytes
     *
     * @return uint32_t
     */
    uint32_t GetDataLength();

    /**
     * @brief Renders the message so it may be dumped into I2C. This is intended for use by the I2C
     * Master & Slave classes. NOTE: The void* will need to be free'd once I2C writing is complete.
     * @return std::tuple<void*, uint32_t> (data, data_length)
     */
    std::tuple<void*, uint32_t> Render();
  };
}  // namespace I2C