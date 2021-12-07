#include <bits/stdc++.h>
using namespace std;

int bitwiseAndRange(int m, int n)
{
    int count = 0;
    while (m != n)
    {
        m >>= 1;
        n >>= 1;
        count++;
    }
    m <<= count;
    n <<= count;
    return m;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int ans = bitwiseAndRange(m, n);
    if (ans != 0)
    {
        cout << "Bitwise AND of Range: " << ans << endl;
    }
    else
    {
        cout << "All Bits are flipped: 0" << endl;
    }
}