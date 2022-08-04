#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols = {{'{',-1},{'[',-2},{'(',-3},{')',3},{']',2},{'}',1}};
string isbalance(string s){
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }

    }
    if(st.empty()) return "YES";
    return "no"; 

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isbalance(s)<<endl;
    }
    return 0;
}