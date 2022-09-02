#include<bits/stdc++.h>
using namespace std;
bool checkpallindrom(vector<int> arr,int s,int n){
    //base case
    if(s>n) return true;
    if(arr[s]==arr[n]){
        return checkpallindrom(arr,s+1,n-1);
    }
    else return false;
}
int main(){
    vector<int> arr{1,2,3,4,1};
    cout<<(checkpallindrom(arr,0,4)?"yes":"no")<<endl;
    return 0;
}