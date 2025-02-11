#include <gtest/gtest.h>

#include <sstream>

#include "CMake_fib.h"

using namespace std;

string captureFibonacciOutput(int n) {
  ostringstream oss;
  streambuf* oldCoutBuf = cout.rdbuf(oss.rdbuf());
  printFibonacci(n);  
  cout.rdbuf(oldCoutBuf);
  return oss.str();
}

TEST(FibonacciTest, HandlesZeroInput) {
  EXPECT_EQ(captureFibonacciOutput(0), "");
}

TEST(FibonacciTest, HandlesSingleNumber) {
  EXPECT_EQ(captureFibonacciOutput(1), "0\n");
}

TEST(FibonacciTest, HandlesMultipleNumbers) {
  EXPECT_EQ(captureFibonacciOutput(5), "0 1 1 2 3\n");
}

TEST(FibonacciTest, HandlesLargeNumbers) {
  EXPECT_EQ(captureFibonacciOutput(10), "0 1 1 2 3 5 8 13 21 34\n");
}
