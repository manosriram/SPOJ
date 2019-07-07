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

void setOne(ld c, ld s)
{
    string top = "\\../", bottom = ".\\/.";
    if (s == 1)
    {
        top = "\\/\\/\\/", bottom = "/\\/\\/\\";
    }
    static ld ind, stat, cnt;
    ld lmt = c + (c * s);
    forn(m, s)
    {
        cnt = 0, ind = 0;
        if (m % 2 == 0) // First Row.
        {
            ind = 0;
            forn(t, lmt + s) // First Row..
            {
                if (cnt > lmt)
                    break;
                if (ind == 4 || ind == s - 1)
                    ind = 0;
                if (t % 2 == 0)
                {
                    cout << '*';
                    cnt++;
                }
                else
                {
                    if (stat % 2 == 0)
                    {
                        forn(j, s)
                        {
                            cout << top[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    else
                    {
                        forn(j, s)
                        {
                            cout << top[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    stat++;
                    // t +=
                }
            }
        }
        else
        {
            ind = 0, cnt = 0;

            forn(t, lmt + s) // First Row..
            {
                if (cnt > lmt)
                    break;
                if (ind == 4)
                    ind = 0;
                if (t % 2 == 0)
                {
                    cout << '*';
                    cnt++;
                }
                else
                {

                    if (stat % 2 == 0)
                    {
                        forn(j, s)
                        {
                            cout << bottom[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    else
                    {
                        forn(j, s)
                        {
                            cout << bottom[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    stat++;
                }
            }
        }
        NL;
    }
}

void setTwo(ld c, ld s)
{
    string top = "./\\.", bottom = "/..\\";
    if (s == 1)
    {
        top = "/\\/\\/\\",
        bottom = "\\/\\/\\/";
    }
    static ld ind, stat, cnt;
    ld lmt = c + (c * s);
    forn(m, s)
    {
        cnt = 0, ind = 0;
        if (m % 2 == 0) // Second Row.
        {
            ind = 0;
            forn(t, lmt + s) // Second Row..
            {
                if (cnt > lmt)
                    break;
                if (ind == 4)
                    ind = 0;
                if (t % 2 == 0)
                {
                    cout << '*';
                    cnt++;
                }
                else
                {

                    if (stat % 2 == 0)
                    {
                        forn(j, s)
                        {
                            cout << top[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    else
                    {
                        forn(j, s)
                        {
                            cout << top[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    stat++;
                }
            }
        }
        else
        {
            ind = 0, cnt = 0;
            forn(t, lmt + s) // First Row..
            {
                if (cnt > lmt)
                    break;
                if (ind == 4)
                    ind = 0;
                if (t % 2 == 0)
                {
                    cout << '*';
                    cnt++;
                }
                else
                {

                    if (stat % 2 == 0)
                    {
                        forn(j, s)
                        {
                            cout << bottom[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    else
                    {
                        forn(j, s)
                        {
                            cout << bottom[ind];
                            ind++;
                            cnt++;
                        }
                    }
                    stat++;
                }
            }
        }
        NL;
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
                setOne(c, s);

            else
                setTwo(c, s);

            printSt(c, s);
        }
        NL;
    }
    NL;
    return 0;
}