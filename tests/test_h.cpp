#include <gtest/gtest.h>
#include <cmath>
#include "../include/main.h"


TEST(p, TESTp) {
  double x = 0.5;
  double result = p(x);
  EXPECT_NEAR(result, 1.21094, 0.00001);
}
