#include <bits/stdc++.h>

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) : m_cents{cents} {}
    int getCents() const { return m_cents; }
};

class Widget{
    public:
    Widget(); 
    ~Widget();
}

template<typename T>
class GraphNode{
    public:
    GraphNode(); // constructor??
    ~GraphNode(); // destructor
}