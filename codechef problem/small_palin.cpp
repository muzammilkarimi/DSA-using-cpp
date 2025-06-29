#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int one,two;
	    cin>>one;
        cin>>two;
	    vector<int> temp(one+two);
        int s=0,e=one+two-1;
        while(one>0){
            temp[s]=1;
            temp[e]=1;
            s++;
            e--;
            one-=2;
        }
        // cout<<one<<two;
        while(two>0){
            temp[s]=2;
            temp[e]=2;
            s++;
            e--;
            two-=2;
        }
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
	}
	// return 0;
}
