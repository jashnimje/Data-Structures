#include <bits/stdc++.h>
using namespace std;

int rightmostBit(int a)
{
    if (a == 0)
    {
        return -1;
    }

    int mask = 1;
    int count = 0;

    while ((a & mask) == 0)
    {
        mask = mask << 1;
        count++;
    }
    return count;
}

int main()
{
    int a;
    cin >> a;
    int val = rightmostBit(a);
    if (val == -1)
    {
        cout << "No Set Bits Found";
    }
    else
    {
        cout << "The Rightmost Set Bit: " << val << endl;
    }

    return 0;
}
