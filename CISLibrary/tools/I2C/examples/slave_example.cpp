/**
 * @file slave_example.cpp
 * @author D. Cheatham
 * @date 11 October 2020
 * @brief Example slave class usage. Note that this is still under development and is subject to
 * change.
 */

#include "../I2C/Slave.hpp"

#include <mbed.h>

enum ExampleCommands { PowerOff, Explode, GoCrazy, Fubar };

int main() {
  I2C::Slave slave(I2C::Subsystem::Development, 14, 15);

  while (true) {
    switch (slave.Process()) {
      case I2C::ShouldRead: {
        I2C::Message read_message;
        slave.Read(read_message);

        std::cout << "Got command id " << read_message.GetCommand() << " from the master!"
                  << std::endl;

        break;
      }
      case I2C::ShouldWrite: {
        I2C::Message
          write_message;  // This is typically something we prepare after a Read. Ie, a Read request
                          // would be sent to demand we prepare a command (this is the slave class,
                          // after all...) and we would have to Write the response. We're only
                          // allowed to write when we're told to.

        std::string data = "Go Cougs!";
        write_message.SetDataLength(data.length());
        write_message.SetData((void*)data.c_str());
        write_message.SetCommand(Explode);

        slave.Write(write_message);
        std::cout << "Sent command id " << write_message.GetCommand() << " with payload " << data
                  << " to the master!" << std::endl;

        break;
      }
      default: {
        // We're not being told what to do, so maybe do something else...
        break;
      }
    }
  }

  return 0;
}
