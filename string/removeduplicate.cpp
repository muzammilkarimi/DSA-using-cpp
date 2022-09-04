#include<bits/stdc++.h>
using namespace std;
string dup(string s){
    // base case
    if(s.length()==0) return " ";
    // Recursive call
    char ch=s[0];
    string rest=dup(s.substr(1));
    if(ch==s[1]) return rest;
    else return ch+rest;
}
string removeDuplicates(string str, int n)
{
    //Write your code here.
//     sort(str.begin(),str.end());
//     string ans=dup(str);
    int count[26]={0};
    for(int i=0; i<n; i++){
        count[str[i]-'a']=1;
    }
    string ans="";
    for(int i=0; i<n; i++){
        if(count[str[i]-'a']){
            ans+=str[i];
        }
        count[str[i]-'a']=0;
    }
    return ans;
}
int main(){
    string str="zzzzzxxzz";
    cout<<removeDuplicates(str,str.length());
    return 0;
}