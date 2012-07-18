//=============================================================================
//D <One line description>
//
// <Full description.>
//

#include "ArbitraryInt.h"
#include <assert.h> // use asserts

// types: classes, enums, typedefs, namespaces
// variables: consts, statics, exported variables (declared extern elsewhere)
// local forward function declarations

//=============================================================================
ArbitraryInt::ArbitraryInt(vector<int> initialiser)
//
//D Constructor
//
  : m_number(initialiser)
{
}

//=============================================================================
ArbitraryInt::ArbitraryInt(vector<int> positive, vector<int> negative)
//
//D Constructor
//
  : m_number(positive),
    m_negative(negative)
{
}

//=============================================================================
ArbitraryInt::~ArbitraryInt()
//
//D Destructor
//
{
}

//=============================================================================
ArbitraryInt::ArbitraryInt(const ArbitraryInt&)
//
//D Prohibited copy constructor
//
{
}

//=============================================================================
void ArbitraryInt::operator=(const ArbitraryInt&)
//
//D Prohibited assignment operator
//
{
}

//=============================================================================
ArbitraryInt ArbitraryInt::operator+(const ArbitraryInt& add) const
//
//D Addition
//
{
}

//=============================================================================
ArbitraryInt ArbitraryInt::operator+(const LARGE_BUILT_IN& add) const
//
//D Addition
//
{
}

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator+=(const ArbitraryInt& add) const
// <nnn> //
// <nnn> //D Addition assignment 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator+=(const LARGE_BUILT_IN& add) const
// <nnn> //
// <nnn> //D Addition assignment 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> ArbitraryInt ArbitraryInt::operator-(const ArbitraryInt& add) const
// <nnn> //
// <nnn> //D Subtraction 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> ArbitraryInt ArbitraryInt::operator-(const LARGE_BUILT_IN& add) const
// <nnn> //
// <nnn> //D Subtraction 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator-=(const ArbitraryInt& add) const
// <nnn> //
// <nnn> //D Subtraction assignment 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator-=(const LARGE_BUILT_IN& add) const
// <nnn> //
// <nnn> //D Subtraction assignment 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> ArbitraryInt ArbitraryInt::operator*(const ArbitraryInt& add) const
// <nnn> //
// <nnn> //D Multiplication
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> ArbitraryInt ArbitraryInt::operator*(const LARGE_BUILT_IN& add) const
// <nnn> //
// <nnn> //D Multiplication
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator*=(const ArbitraryInt& add) const
// <nnn> //
// <nnn> //D Multiplication assignment 
// <nnn> //
// <nnn> {
// <nnn> }

// <nnn> //=============================================================================
// <nnn> void ArbitraryInt::operator*=(const LARGE_BUILT_IN& add) const
// <nnn> //
// <nnn> //D Multiplication assignment 
// <nnn> //
// <nnn> {
// <nnn> }

bool ArbitraryInt::operator==(const ArbitraryInt& eq) const
//
//D Equaliity
//
{
}

bool ArbitraryInt::operator==(const LARGE_BUILT_IN& eq) const
//
//D Equaliity
//
{
}
