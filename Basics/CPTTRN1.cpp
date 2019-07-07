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

void printEven(ld c)
{
    forn(t, c)
    {
        if (t % 2 == 0)
            cout << '*';
        else
            cout << '.';
    }
    cout << NL;
    return;
}

void printOdd(ld c)
{
    forn(t, c)
    {
        if (t % 2 == 0)
            cout << '.';
        else
            cout << '*';
    }
    cout << NL;
    return;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T, r, c;
    cin >> T;

    while (T--)
    {
        cin >> r >> c;

        forn(t, r)
        {
            if (t % 2 == 0)
                printEven(c);
            else
                printOdd(c);
        }
        cout << NL;
    }

    return 0;
}