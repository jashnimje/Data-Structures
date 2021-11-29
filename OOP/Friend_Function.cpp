#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Friend Function: sumComplex can access private variables
    friend Complex sumComplex(Complex o1, Complex o2);
    void print()
    {
        cout << a << " + " << b << " i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.print();

    c2.setNumber(3, 4);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();
}