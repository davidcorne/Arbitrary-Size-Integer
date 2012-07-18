//=============================================================================
//D unit test for ArbitraryInt

#include "ArbitraryInt.h"

#include <assert.h> // use asserts
#include <iostream>
#include <vector>

// types: classes, enums, typedefs, namespaces
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

// variables: consts, statics, exported variables (declared extern elsewhere)
// local forward function declarations

//=============================================================================
void utest(const bool test_value, const string& message)
//
//D Test the value and return the message with PASSED or FAILED, assert on fail
//
{
  if (!test_value) {
    cerr << "FAILED: " << message << endl;
    assert(test_value);
  } else {
    cout << "PASSED: " << message << endl;
    cout << endl;
  }
}

//=============================================================================
void test_assignment() {
  //D tests assigning larger than integer numbers

  // larger than INTMAX_MAX
  vector<int> g;
  for (int i = 0; i < 99; ++i) {
    g[i] = 0;
  }
  g[99] = 1;
  
  ArbitraryInt googol(g);
}

void test_addition() {
  vector<int> g;
  for (int i = 0; i < 99; ++i) {
    g[i] = 0;
  }
  g[99] = 1;
  
  ArbitraryInt x(g);
  g[99] = 2;
  ArbitraryInt y(g);
  ArbitraryInt z(g);
  utest(x + y == z, "Addition for huge numbers");

  vector<int> f;
  for (int i = 0; i < 99; ++i) {
    f[i] = 9;
  }
  g[99] = 1;
  ArbitraryInt overflow(f);
  ArbitraryInt answer(g);
  utest(
    overflow + 1 == answer,
    "Check that overflowing works, implicitly check addition with ints work"
  );
  
}

void test_subtraction() {
  
}

void test_multiplication() {
  
}

void run_tests() {
  test_assignment();
  test_addition();
  test_subtraction();
  test_multiplication();
}  

//=============================================================================
int main(int num_arguments, char* arguments[])
//
//D The entry for the tests
//
{
  cout << "Testing arbitrary integers" << endl;
  run_tests();
  return 0;
}
