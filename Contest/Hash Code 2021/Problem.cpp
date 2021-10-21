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

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    fstream inp("d.txt", ios::in);
    fstream out("ans.txt", ios::out);
    int d, i, s, v, f, b, e, l, p;
    string street;
    vector<string> streets;
    unordered_map<string, int> map;
    inp >> d >> i >> s >> v >> f;
    //out << d << i << s << v << f << "\n";
    while (s--)
    {
        inp >> b >> e >> street >> l;
        map[street] = e;
        //out << b << e << street << l << "\n";
    }
    int temp = v;
    while (v--)
    {
        inp >> p;
        if (v == temp - 1)
        {
            out << p << endl;
        }
        while (p--)
        {
            string word;
            inp >> word;
            streets.pb(word);
            if (v == temp - 1)
            {

                out << map[word] << endl;
                out << 1 << endl;
                out << word << " 1" << endl;
            }
            //out << word << " ";
        }
    }
    return 0;
}