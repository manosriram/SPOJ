#include <iostream>
using namespace std;

int main()
{
    int T, n, k;
    cin >> T;

    while (T--)
    {
        cin >> n >> k;
        int a[k + 2];
        for (int t = 1; t < k + 1; t++)
        {
            cin >> a[t];
        }
        int min_ = -1;

        for (int t = 1; t < k + 1; t++)
        {
            if (a[t] == 1)
            {
                min_ = n;
                break;
            }
            if ((a[t] % n == 0) && (a[t] != -1))
            {
                if ((n * a[t]) < min_)
                {
                    min_ = (n * a[t]);
                }
            }
        }
        cout << min_ << '\n';
    }
}