#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // arr[2]=10;
        int maxlen=-1;
        for(int i=0; i<n; i++){
                arr[i]*=x;
                int l = 0,r=1;
                while(r<n and l<n){
                    if(arr[r]>=arr[r-1]){
                        r++;
                    }
                    else{
                        l=r;
                        r++;
                    }
                    maxlen = max(maxlen, r-l);
                }
                maxlen = max(maxlen, r-l);
                arr[i]/=x;

                
        }
        cout<<maxlen<<endl;
	}
	return 0;
}
// 3
// 5 3
// 1 2 1 4 2
// 3 10
// 2 5 3
// 4 5
// 90 2 5 6