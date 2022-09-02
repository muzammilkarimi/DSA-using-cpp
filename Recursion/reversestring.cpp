#include<bits/stdc++.h>
using namespace std;
string reverseusingRec(string &str,int s,int n){
    cout<<str<<endl;
    //base case
    if(s>n) return str;
    swap(str[s],str[n]);
    return reverseusingRec(str,s+1,n-1);

}
int main(){
    string s="muzammil";
    cout<<reverseusingRec(s,0,7);

    return 0;
}