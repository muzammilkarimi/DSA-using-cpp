#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int round;
    cin >> round;
    int l = 0, player = 0, ans = INT_MIN, s = 0, j;
    int playerone[round], playertwo[round];
    for (int i = 0; i < round; i++)
    {
        cin >> playerone[i];
        cin >> playertwo[i];
    }
    int lead = 0;

    for (int i = 0; i < round; i++)
    {
        lead += playerone[i] - playertwo[i];
        if (lead > 0 and lead > ans)
        {
            player = 1;
            ans = lead;
        }
        else if (lead < 0 and -lead > ans)
        {
            player = 2;
            ans = -lead;
        }
    }
    cout << player << " " << ans;
    return 0;
}