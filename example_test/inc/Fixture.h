#include <gtest/gtest.h>

class Fixture : public testing::Test
{
protected:
   void SetUp() override
   {
      //before each test
   }

   void TearDown() override
   {
      //after each test
   }
};