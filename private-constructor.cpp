#include <iostream>
#include <string>

// code doesn't work as constructor is private
using namespace std;
class A{
    int a;
    A(){
        a = 5;
    }

public:
    void assign(int i){
        a = i;
    }
    int return_value(){
        return a;
    }
};
int main(int argc, char const *argv[])
{
    A obj;
    obj.assign(10);
    cout<<obj.return_value();
}