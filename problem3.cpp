#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"the weight of clothes"<<endl;
    int weight=0;
    cin>>weight;
    if(weight<=2000 and weight>1){
        cout<<"It take 25 minutes";
    }
    else if(weight>2000 and weight<=4000){
        cout<<"It take 35 minutes";
    }
    else if(weight<=7000 and weight>4000){
        cout<<"It take 45 minutes";
    }
    else {
        cout<<"INVALID INPUT";
    }
    return 0;
}