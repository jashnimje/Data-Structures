#include <bits/stdc++.h>
using namespace std;

class MethodOverloading
{
public:
    void fun()
    {
        cout << "This is fun with no arguments" << endl;
    }

    void fun(int x)
    {
        cout << "This is fun with int argument" << endl;
    }

    void fun(double x)
    {
        cout << "This is fun with double argument" << endl;
    }
};

int main()
{
    MethodOverloading mo;
    mo.fun();
    mo.fun(3);
    mo.fun(6.5);
    return 0;
}
