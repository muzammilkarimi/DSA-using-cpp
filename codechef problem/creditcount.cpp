#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, y;
    cin >> d >> y;
    while (d--)
    {
        int n;
        cin >> n;
        int sum = 0;
        while (n--)
        {
            int t1, t2;
            cin >> t1;
            cin >> t2;
            if (t2 <= 21600)
            {
                sum += 0;
            }
            else if (t1 >= 21600)
            {
                sum += (t2 - t1) * y;
            }
            else
            {
                sum += (t2 - 21600) * y;
            }
        }
        cout << sum << endl;
    }

    return 0;
}