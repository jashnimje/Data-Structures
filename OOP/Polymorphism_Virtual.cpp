#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "This is base class's print function" << endl;
    }

    void display()
    {
        cout << "This is base class's display function" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is derived class's print function" << endl;
    }

    void display()
    {
        cout << "This is derived class's display function" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->display();
    return 0;
}