//=============================================================================
// ArbitraryInt.h
//
//  <Full description.>
//

#ifndef ArbitraryInt_H
#define ArbitraryInt_H

#include "LargeBuiltIn.h"

#include <vector>

// class predeclarations to avoid header file inclusion

// types: classes, enums, typedefs, namespaces

using std::vector;

// variables: consts, statics, exported variables (declared extern elsewhere)
// local forward function declarations

//=============================================================================
class ArbitraryInt {
public:

  ArbitraryInt(vector<int> initialiser);
  ArbitraryInt(vector<int> positive, vector<int> negative);
  // Default constructor

  ArbitraryInt operator+(const ArbitraryInt& add) const;
  ArbitraryInt operator+(const LARGE_BUILT_IN& add) const;
  // addition

  // <nnn> void operator+=(const ArbitraryInt& add);
  // <nnn> void operator+=(const LARGE_BUILT_IN& add);
  // <nnn> // addition assignment

  // <nnn> ArbitraryInt operator+(const ArbitraryInt& sub) const;
  // <nnn> ArbitraryInt operator+(const LARGE_BUILT_IN& sub) const;
  // <nnn> // subtraction
  
  // <nnn> void operator+=(const ArbitraryInt& sub);
  // <nnn> void operator+=(const LARGE_BUILT_IN& sub);
  // <nnn> // subtraction assignment

  // <nnn> ArbitraryInt operator+(const ArbitraryInt& mul) const;
  // <nnn> ArbitraryInt operator+(const LARGE_BUILT_IN& mul) const;
  // <nnn> // multiplication
  
  // <nnn> void operator+=(const ArbitraryInt& mul);
  // <nnn> void operator+=(const LARGE_BUILT_IN& mul);
  // <nnn> // multiplication assignment

  bool operator==(const ArbitraryInt& eq) const;
  bool operator==(const LARGE_BUILT_IN& eq) const;
  // equality

  // <nnn> bool operator!=(const ArbitraryInt& neq) const;
  // <nnn> bool operator!=(const LARGE_BUILT_IN& neq) const;
  // inequality

  void print() const;
  // prints the number

  ~ArbitraryInt();
  // Destructor

private:

  // friends
  // functions

  ArbitraryInt(const ArbitraryInt&);
  // Prohibited copy constructor

  void operator=(const ArbitraryInt&);
  // Prohibited assignment operator

  // variables

  vector<int> m_number;
  vector<int> m_negative;
};

#endif
