// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int s=0,e=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]>0){
//             e++;
//         }
//         else if(arr[i]<0){
//             swap(arr[s],arr[e]);
//             s++;
//             e++;
//         }

//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void negtiveoneside(int arr[], int n){
    int high=0,low=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[low++],arr[high++]);
        }
        else{
            high++;
        }
    }
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i<n ; i++){
	    cin>>arr[i];
	}
	negtiveoneside(arr,n);
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}