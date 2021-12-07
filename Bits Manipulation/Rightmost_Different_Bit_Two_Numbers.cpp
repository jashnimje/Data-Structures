#include <bits/stdc++.h>
using namespace std;

int rightmostBit(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return -1;
    }

    int mask = 1;
    int count = 0;

    while ((a & mask) == (b & mask))
    {
        if ((mask > a) && (mask > b))
        {
            return -1;
        }
        mask = mask << 1;
        count++;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int val = rightmostBit(a, b);
    if (val == -1)
    {
        cout << "No Different Set Bits Found";
    }
    else
    {
        cout << "The Rightmost Different Set Bit: " << val << endl;
    }

    return 0;
}
