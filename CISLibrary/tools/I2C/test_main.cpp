#include "Master.hpp"
#include "Slave.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

int main(int32_t arg_c, char** arg_v) {
  InitGoogleTest(&arg_c, arg_v);
  return RUN_ALL_TESTS();
}