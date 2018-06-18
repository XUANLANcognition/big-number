#include <gtest/gtest.h>
#include "../Mp_int.h"

TEST(Mp_intTest, init) {
  Mp_int m;
  EXPECT_EQ(32, m.getAlloc());
}

TEST(Mp_growTest, grow) {
  Mp_int m;
  m.mp_grow(54);
  EXPECT_EQ(64, m.getAlloc());
}

TEST(Mp_zipTest, zip) {
  Mp_int m;
  EXPECT_EQ(0, m.getUsed());
  // incomplete
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}