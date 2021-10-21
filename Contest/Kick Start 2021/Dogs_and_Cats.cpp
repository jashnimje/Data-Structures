#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define rep(i, n) for (i = 0; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

void solve(int test)
{
    ll i, j, n, d, c, m;
    cin >> n >> d >> c >> m;
    vector<char> animal(n);
    ll dCount = 0, feedCount = 0;
    for (i = 0; i < n; i++)
    {
        cin >> animal[i];
        if (animal[i] == 'D')
        {
            dCount++;
        }
    }
    // deb(dCount);
    for (i = 0; i < n; i++)
    {
        if (animal[i] == 'D')
        {
            if (d > 0)
            {
                d--;
                c += m;
                feedCount++;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (c > 0)
            {
                c--;
            }
            else
            {
                break;
            }
        }
    }
    if (feedCount == dCount)
    {
        cout << "Case #" + to_string(test) + ": YES" << endl;
    }
    else
    {
        cout << "Case #" + to_string(test) + ": NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    int test = 1;
    while (test <= t)
    {
        solve(test);
        test++;
    }

    return 0;
}