#include <bits/stdc++.h>

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) : m_cents{cents} {}
    int getCents() const { return m_cents; }
};

class Widget
{
public:
    Widget();
    ~Widget();
};

template <typename T>
class GraphNode
{
public:
    GraphNode();  // constructor??
    ~GraphNode(); // destructor
};

class A
{
public:
    A();
};

class B
{
public:
    explicit B(int x = 0, bool b = true);
};

class C
{
public:
    explicit C(int x);
};
// the constructors for classes B and C are declared explicit here.
// That prevents them from being used to perform implicit type conversions.

void doSomething(B bObject); // a function taking an object of 
                             // type B
B bObj1;                     // an object of type B
doSomething(bObj1);          // passes bObj1 to do something

B bObj2(28);                 //error! do something takes a B,
                             // not an int and there is no implicit conversion
                             // from B to int

doSomething(B(28)); uses the B constructor to explicitly convert, i.e., cast the int to a B for this call