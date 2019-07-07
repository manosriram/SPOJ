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

void printSt(ld c, ld s)
{
    ld lmt = c + (c * s);
    forn(t, lmt + 1)
    {
        cout << "*";
    }
    NL;
    return;
}

void printOddLevel(ld c, ld s)
{
    static ld ind, stat = 0;
    string oddR1 = "./", oddR2 = "\\.";
    string evenR1 = "/.", evenR2 = ".\\";
    ld lmt = c + (s * c);
    forn(t, lmt + s)
    {
        stat++;
        if (t % 2 == 0)
        {
            cout << "*";
        }
        else
        {
            if (stat % 2 == 0)
            {
                ind = 0;
                forn(r1, s)
                {
                    if (ind == 2)
                        ind = 0;
                    cout << oddR2[ind];
                    ind++;
                }
            }
            else
            {
                forn(r1, s)
                {
                    if (ind == 2)
                        ind = 0;
                    cout << oddR1[ind];
                    ind++;
                }
            }
        }
    }
}

void printEvenLevel(ld c, ld s)
{
    string oddR1 = "\\.", oddR2 = "./";
    string evenR1 = ".\\", evenR2 = "/.";
    forn(t, s)
    {
        if (t % 2 == 0)
        {
        }
        else
        {
        }
    }
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T, l, c, s;
    cin >> T;
    while (T--)
    {
        cin >> l >> c >> s;

        printSt(c, s);
        forn(t, l)
        {
            if (t % 2 == 0)
            {
                printOddLevel(c, s);
            }
            else
            {
                printEvenLevel(c, s);
            }
            NL;
        }
    }
    return 0;
}