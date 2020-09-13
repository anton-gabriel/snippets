#pragma once

class V;

class T {
  //assignment
public:
  //simple assignment
  T& operator =(const V& other);
  //addition assignment
  T& operator +=(const V& other);
  //subtraction assignment
  T& operator -=(const V& other);
  //multiplication assignment
  T& operator *=(const V& other);
  //division assignment
  T& operator /=(const V& other);
  //modulo assignment
  T& operator %=(const V& other);
  //bitwise AND assignment
  T& operator &=(const V& other);
  //bitwise OR assignment
  T& operator |=(const V& other);
  //bitwise XOR assignment
  T& operator ^=(const V& other);
  //bitwise left shift assignment
  T& operator <<=(const V& other);
  //bitwise right shift assignment
  T& operator >>=(const V& other);

  //increment decrement
public:
  //pre-increment
  T& operator++();
  //pre-decrement
  T& operator--();
  //post-increment
  T operator++(int);
  //post-decrement
  T operator--(int);

  //arithmetic
public:
  //unary plus
  T operator+() const;
  //unary minus
  T operator-() const;
  //addition
  T operator+(const V& other) const;
  //subtraction
  T operator-(const V& other) const;
  //multiplication
  T operator*(const V& other) const;
  //division
  T operator/(const V& other) const;
  //modulo
  T operator%(const V& other) const;
  //bitwise NOT
  T operator~() const;
  //bitwise AND
  T operator&(const V& other) const;
  //bitwise OR
  T operator|(const V& other) const;
  //bitwise XOR
  T operator^(const V& other) const;
  //bitwise left shift
  T operator<<(const V& other) const;
  //bitwise right shift
  T operator>>(const V& other) const;

  //logical
public:
  //negation
  bool operator!() const;
  //AND
  bool operator&&(const V& other) const;
  //inclusive OR
  bool operator||(const V& other) const;

  //comparison
public:
  //equal to
  bool operator ==(const V& other) const;
  //not equal to
  bool operator !=(const V& other) const;
  //less than
  bool operator <(const V& other) const;
  //greater than
  bool operator >(const V& other) const;
  //less than or equal to
  bool operator <=(const V& other) const;
  //greater than or equal to
  bool operator >=(const V& other) const;

  //member access
public:
  //subscript
  T& operator[](V other);
  //indirection
  T& operator*();
  //address-of
  T* operator&();
  //member of pointer
  T* operator->();
  //pointer to member of pointer
  T& operator->*(V other);

  //other
public:
  //function call
  T operator()(V& first, V& second, ...);
  //comma
  T& operator,(V& other);
};

//assignment
//addition assignment
T& operator +=(T& first, const V& second);
//subtraction assignment
T& operator -=(T& first, const V& second);
//multiplication assignment
T& operator *=(T& first, const V& second);
//division assignment
T& operator /=(T& first, const V& second);
//modulo assignment
T& operator %=(T& first, const V& second);
//bitwise AND assignment
T& operator &=(T& first, const V& second);
//bitwise OR assignment
T& operator |=(T& first, const V& second);
//bitwise XOR assignment
T& operator ^=(T& first, const V& second);
//bitwise left shift assignment
T& operator <<=(T& first, const V& second);
//bitwise right shift assignment
T& operator >>=(T& first, const V& second);

//increment decrement
//pre-increment
T& operator++(T& first);
//pre-decrement
T& operator--(T& first);
//post-increment
T operator++(T& first, int);
//post-decrement
T operator--(T& first, int);

//arithmetic
//unary plus
T operator+(const T& first);
//unary minus
T operator-(const T& first);
//addition
T operator+(const T& first, const V& second);
//subtraction
T operator-(const T& first, const V& second);
//multiplication
T operator*(const T& first, const V& second);
//division
T operator/(const T& first, const V& second);
//modulo
T operator%(const T& first, const V& second);
//bitwise NOT
T operator~(const T& first);
//bitwise AND
T operator&(const T& first, const V& second);
//bitwise OR
T operator|(const T& first, const V& second);
//bitwise XOR
T operator^(const T& first, const V& second);
//bitwise left shift
T operator<<(const T& first, const V& second);
//bitwise right shift
T operator>>(const T& first, const V& second);

//logical
//negation
bool operator!(const T& first);
//AND
bool operator&&(const T& first, const V& other);
//inclusive OR
bool operator||(const T& first, const V& other);

//comparison
//equal to
bool operator ==(const T& first, const V& other);
//not equal to
bool operator !=(const T& first, const V& other);
//less than
bool operator <(const T& first, const V& other);
//greater than
bool operator >(const T& first, const V& other);
//less than or equal to
bool operator <=(const T& first, const V& other);
//greater than or equal to
bool operator >=(const T& first, const V& other);

//member access
//indirection
T& operator*(V other);
//address-of
T* operator&(V other);
//pointer to member of pointer
T& operator->*(V first, V second);

//other
//comma
V& operator,(const T& first, V& second);