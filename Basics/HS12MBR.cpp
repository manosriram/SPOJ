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
#define NL cout << '\n';
#define INF (int)1e9
using namespace std;
typedef vector<int> vI;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T, n, x1, x2, y1, y2, r;
    cin >> T;
    while (T--)
    {
        cin >> n;
        char obj;
        while (n--)
        {
            cin >> obj;
            if (obj == 'p')
            {
                cin >> x1 >> x2;
                cout << x1 << " " << x2 << " " << x1 << " " << x2;
            }
            else if (obj == 'c')
            {
                cin >> x1 >> y1 >> r;
                cout << (x1 - r) << " " << (y1 - r) << " " << (x1 + r) << " " << (y1 + r);
            }
            else if (obj == 'l')
            {
                cin >> x1 >> x2 >> y1 >> y2;
                cout << x1 << " " << x2 << " " << y1 << " " << y2;
            }
            NL;
        }
    }

    return 0;
}