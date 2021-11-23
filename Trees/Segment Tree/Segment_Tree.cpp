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

int getSum(int st[], int ss, int se, int qs, int qe, int si)
{
    // Complete Overlap
    if (qs <= ss && qe >= se)
    {
        return st[si];
    }

    // No Overlap
    if (se < qs || ss > qe)
    {
        return 0;
    }

    int mid = ss + (se - ss) / 2;
    return getSum(st, ss, mid, qs, qe, 2 * si + 1) + getSum(st, mid + 1, se, qs, qe, 2 * si + 2);
}

void build(int arr[], int st[], int ss, int se, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return;
    }
    int mid = ss + (se - ss) / 2;
    // Left Child
    build(arr, st, ss, mid, 2 * si + 1);

    // Right Child
    build(arr, st, mid + 1, se, 2 * si + 2);

    // Parent Node
    st[si] = st[2 * si + 1] + st[2 * si + 2];
    return;
}
void solve()
{
    int i, n, q, l, r;
    cin >> n;
    int arr[n];
    int st[4 * n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    build(arr, st, 0, n - 1, 0);
    cin >> q;
    for (int i = 0; i < sizeof(st); i++)
    {
        cout << st[i] << " ";
    }
    cout << "Test" << endl;
    while (q--)
    {
        cin >> l >> r;
        cout << getSum(st, 0, n - 1, l, r, 0) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}