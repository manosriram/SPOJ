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
    ld T;
    cin >> T;
    while (T--)
    {
        string temp;
        cin >> temp;
        int ind = 0;
        while (ind < temp.length() / 2)
        {
            cout << temp[ind];
            ind += 2;
        }
        NL;
    }
    return 0;
}