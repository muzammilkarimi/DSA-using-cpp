#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a==b){
	        cout<<"yes"<<endl;
            break;
	    }
	    int n=min(a,b);
	    int m=max(a,b);
	    bool ans=0;
	    for(int i=1; i<m/2; i++ ){
	        n*=2;
	        if(n==m){
	            ans=1;
	            break;
	        }
	    }
	    if(ans){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
