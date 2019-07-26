#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <limits.h>
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
vector<ld> vc;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    ld T, k, N, Q, t;
    scanf("%lld %lld", &N, &Q);
    ld temp;
    for (int t = 0; t <= N; t++)
    {
        if (t == 0)
        {
            vc.push_back(INT_MAX);
            continue;
        }
        scanf("%lld", &temp);
        vc.push_back(temp);
    }

    ld tp, x;
    vector<ld>::iterator itr;
    while (Q--)
    {
        scanf("%lld", &tp);
        switch (tp)
        {
        case 1:
            scanf("%lld %lld", &k, &x);
            itr = vc.begin() + k;
            vc.insert(itr, x);
            break;

        case 2:
            scanf("%lld", &k);
            itr = vc.begin() + k;
            vc.erase(itr);
            break;

        case 3:
            scanf("%lld", &k);
            printf("\n%lld", vc[k]);
            break;
        }
    }

    return 0;
}