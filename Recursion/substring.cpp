#include<bits/stdc++.h>
using namespace std;
void solve(string str,int index, string ans){
    // base case
    if(index>=str.length()){
        cout<<ans<<endl;
        return;
    }
    solve(str,index+1,ans);
    char ch=str[index];
    ans.push_back(ch);
    solve(str,index+1,ans);
}
int main(){
    string str="mak";
    string ans="";
    int index=0;
    solve(str,index,ans);
    return 0;
}