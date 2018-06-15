#include <gtest/gtest.h>
#include "../Mp_int.h"

TEST(Mp_intTest, init) {
  Mp_int m;
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}