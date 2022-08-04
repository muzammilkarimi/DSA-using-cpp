#include <bits/stdc++.h>
using namespace std;
int main()
{
    int round;
    cin >> round;
    int l = 0, player = 0, ans = INT_MIN, s = 0, j;
    int playerone[round], playertwo[round], lead[round], moduluslead[round];
    for (int i = 0; i < round; i++)
    {
        cin >> playerone[i];
        cin >> playertwo[i];
        s = s + playerone[i] - playertwo[i];
        lead[i] = s;
        if (lead[i] < 0)
        {
            moduluslead[i] = -lead[i];
        }
        else{moduluslead[i] = lead[i];}
    }
    j = moduluslead[0];
    int q = 0;
    for (int i = 0; i < round; i++)
    {
        if (j < moduluslead[i])
        {
            j = moduluslead[i];
            q = i;
        }
    }
    l = 1;
    if (lead[q] < 0)
    {
        l = 2;
    }
    cout << l << " " << moduluslead[q]<<endl;
    
    return 0;
}