#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int> p;//====initialize a pair
    // p={1,2};//====insert the value
    // pair<int,int> &p1=p;//====copy the value by reference
    // p1.first=3;//====change in both pair because we copy the value by reference  
    // cout<<p1.first<<" "<<p1.second<<endl;//====output the first value and then output the second value of pair
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int,bool> p;
    // p={2,0};
    // cout<<p.first<<" "<<p.second<<endl;
    //======take the input=======
    pair<int,int> p_array[3];
    for(int i=0; i<3; i++){
        cin>>p_array[i].first>>p_array[i].second;
    }
    // p_array[0]={1,2};
    // p_array[1]={3,4};
    // p_array[2]={5,6};
    // swap(p_array[0],p_array[2]);
    ///=====print the output======
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    return 0;
}