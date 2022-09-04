#include <bits/stdc++.h>
using namespace std;
void solution(string s, int n)
{
    int ans = 0;
    int count[5] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            count[0]++;
        }
        else if (s[i] == 'A')
        {
            count[1]++;
        }
        else if (s[i] == 'L')
        {
            count[2]++;
        }
        else if (s[i] == 'O')
        {
            count[3]++;
        }
        else if (s[i] == 'N')
        {
            count[4]++;
        }
    }
    // for(int i:count){
    //     cout<<i<<" ";
    // }
    int check=0;
    int t=0;
    while(count[0]>0){
        check=0;
        // t=0;
        if(count[0]>=1){
            check++;
            count[0]--;
            // t++;
        }
        if(count[1]>=1){
            check++;
            count[1]--;
            // t++;
        }
        if(count[2]>=2){
            check+=2;
            count[2]-=2;
            // t++;
        }
        if(count[3]>=2){
            check+=2;
            count[3]-=2;
            // t++;
        }
        if(count[4]>=1){
            check++;
            count[4]--;
            // t++;
        }
        if(check==7) ans++;
        

    }
    cout<<ans;
}
int main()
{
    string s = "BOANXXOLLBOANXXOLLhjshfjkshflhsfkBOANXXOLL";
    int n = 9;
    // cout<<(s[2]=='A'?"yes":"no")<<endl;
    // s.erase(2,1);
    // cout<<s;
    solution(s, s.length());
    return 0;
}