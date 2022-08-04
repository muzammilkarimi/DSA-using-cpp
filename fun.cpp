#include <bits/stdc++.h>
using namespace std;
int t(int n, int *f){
    int z,a;
    if(n<=1){
        // 
        return 1;
    }
    
    z=t(n-1,f);
    a=z+*f;
    return a;
    
}
int main (){
    int x=15;
    cout<<t(5,&x);
    cout<<setw(6)<<"* "<<endl;
    cout<<setw(6)<<"***"<<endl;
    cout<<setw(7)<<"*****"<<endl;
    cout<<setw(8)<<"*******"<<endl;
    cout<<setw(9)<<"*********"<<endl;



    
    //===============time travel========================
	// int n,t,r;
	// cin>>n>>t>>r;
	// int arr[n];
	// for(int i=0; i<n; i++){
	//     cin>>arr[i];
	// }
	// bool flag =1;
	// for(int i=0; i<n; i++){
	//     if(arr[i]+r>=t){
	//         flag=0;
	//     }
	    
	// }
	// if(flag){
	//     cout<<"no";
	// }
	// else{
	//     cout<<"yes";
	// }
	


    //=========================================================
    //===========================================================
    // int m=2,n=2,k=3,l=1,o=4;
    // int max1=max(m,n);
    // int max2=max(max1,k);
    // int max3=max(max2,l);
    // int maxt=max(max3,o);
    // cout<<maxt;
    //==============================================================
    // int a[5]={1,2,3,4,5};
    // for(int i=4; i<5; i++){
    //     cout<<a[i]<<" ";

    // }
    // for(int i=0; i<=3; i++){
    //     cout<<a[i]<<" ";
    // }

    return 0;
}
