#include<bits/stdc++.h>
using namespace std;
#define fi(s,n) for(int i=s;i<n;i++)
void printv(vector<int> v){
    cout<<"size of vector:"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main(){
    // vector <int> A={2,1,4,3,8};//===initialize the vector
    vector <int> A;//===initialize the vector
    int n;
    cin>>n;
    fi(0,n){
        int x;
        cin>>x;
        A.push_back(x);
    }
    vector<int> B=A;//===copy the element from A to B by value
    vector<int> &B=A;//====copy the element by call by reference from A to B
    B[1]=10;
    printv(B);
    // A.pop_back();//====to remove the element from back of the vector 
    // int s=A.size();//====size of vector
    // cout<<s<<endl;
    cout<<"=============="<<endl;
    printv(A);
    // sort(A.begin(), A.end());
    // cout<<"After sort"<<endl; 
    bool position = binary_search(A.begin(),A.end(),1);
    cout<<position;
     
    return 0;
}