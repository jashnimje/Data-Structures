#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display()
    {
        cout << real << " " << imag << endl;
    }
};

int main()
{
    Complex a(2, 6);
    Complex b(5, 7);
    Complex c = a + b;
    c.display();
}