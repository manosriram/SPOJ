#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <iomanip>
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
    ld T, n;
    cin >> T;
    while (T--)
    {
        double apSum = 0, gpProd = 1, hpSum = 0;
        cin >> n;

        double a[n];
        double ap, gp, hp;
        forn(t, n)
        {
            cin >> a[t];
            apSum += a[t];
            hpSum += double(1 / a[t]);
            gpProd *= a[t];
        }

        apSum = (apSum / n);
        gpProd = pow(gpProd, (1.0 / n));
        hpSum = (n / hpSum);

        cout << fixed;
        cout << setprecision(9) << apSum << " " << gpProd << " " << hpSum << '\n';
    }
    return 0;
}