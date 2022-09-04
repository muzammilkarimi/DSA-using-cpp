#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b){
    return a>b;
}
int main(){
    int arr[5]={1,2,5,3,4};
    int n=5;
    vector<string> str;
    for(int i:arr){
        string s=to_string(i);
        str.push_back(s);
    }
    // cout<<s<<endl;
    sort(str.begin(),str.end(),comp);
    // sort(arr,arr+n,comp);
    for(int i=0; i<n; i++){
       cout<<str[i]<<" ";
    }
    return 0;
}