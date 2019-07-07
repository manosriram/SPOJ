#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL '\n'
#define INF (int)1e9
using namespace std;
typedef vector<int> vI;

void printSt(ld c, ld w)
{
    ld lmt = (c + (c * w)) + 1;
    forn(t, lmt)
    {
        cout << "*";
    }
    cout << NL;
    return;
}

void printMid(ld c, ld w, ld h)
{
    ld lmt = (c + (c * w)) + 1;

    forn(t, (2 * c) + 1)
    {
        if (t % 2 == 0)
        {
            cout << '*';
        }
        else
        {
            forn(l, w)
            {
                cout << '.';
            }
            // t += w + t;
        }
    }
    cout << NL;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T, l, h, w, c;
    cin >> T;
    while (T--)
    {
        cin >> l >> c >> h >> w;
        printSt(c, w);
        ld lmt = (c + (c * w)) + 1;

        forn(k, l)
        {
            forn(o, h)
            {
                printMid(c, w, h);
            }
            printSt(c, w);
        }
        cout << NL;
    }

    return 0;
}