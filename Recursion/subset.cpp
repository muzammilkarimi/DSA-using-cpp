#include<bits/stdc++.h>
using namespace std;
void subsequences(string s,string output){
    // base case
    if(s.length()==0){
        if(output.length()>0){
            cout<<output<<" ";
        }
        return;
    }

    // recursive case
    char ch = s[0];
    string rest = s.substr(1);
    subsequences(rest,output);
    subsequences(rest,output+ch);
}
int main(){
    string s="abc";
    string output = "";
    subsequences(s,output);
    
    return 0;
}