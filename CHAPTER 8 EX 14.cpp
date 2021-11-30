//COP 3330 KYLE CORRADO


//Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might
//we want to do that? Why don’t people do that often? Try it; write a couple of small programs to see what works.


#include <iostream>
using namespace std;
 
class Test {
    int value;
 
public:
    Test(int v = 0) { value = v; }
 
    int getValue() const { return value; }
};
 
int main()
{
    Test t(20);
    cout << t.getValue();
    return 0;
}
