#include<bits/stdc++.h>
using namespace std;
int main(){
    string str= "muuzammil";
    int i,count[256],len=str.length();
    for(i=0; i<256; i++){
        count[i]=0;
    }
    for(i=0;i<len; i++){
        if(count[str[i]]==1){
            cout<<str[i];
            break;
        }
        else{
            count[str[i]]++;
        }
    }
    if(i==len){
        cout<<"non repeat";
    }

    return 0;
}