#include<bits/stdc++.h>
using namespace std;
void findpermutation(vector<int> arr, vector<vector<int>> &per, int index){
    if(index>=arr.size()){
        per.push_back(arr);
        return ;
    }
    for(int j=index; j<arr.size(); j++){
        swap(arr[index],arr[j]);
        findpermutation(arr,per,index+1);
        swap(arr[index],arr[j]);
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> per;
    int index=0;
    findpermutation(arr,per,index);
    for(int i=0; i<per.size(); i++){
        for(int j=0; j<per[i].size(); j++){
            cout<<per[i][j];
        }cout<<endl;
    }
    return 0;
}