#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[3]={8,5,7};
    int temp=0;
    //this is for first number 
    if(arr[0]>arr[1] and arr[0]>arr[2]){//if no1 is greater
        swap(arr[0],arr[2]);
    }
    else if((arr[0]>arr[1] and arr[0]<arr[2]) or (arr[0]<arr[1] and arr[0]>arr[2])){//if no1 is smaller then one and greatr then one means middle 
        swap(arr[1],arr[0]);
    }//else it is on the correct position means first
    //this is for second no
    if(arr[1]>arr[0] and arr[1]>arr[2]){//if greatest then swap on last 
        swap(arr[1],arr[2]);
    }
    else if(arr[1]<arr[0] and arr[1]<arr[2]){//if smallest then swap on first
        swap(arr[1],arr[0]);
    }//else it is on correct position means middle
    //for the last no 
    if(arr[2]<arr[1] and arr[2]<arr[0]){//if no is smallest then swap to first
        swap(arr[2],arr[0]);
    }
    else if((arr[2]>arr[1] and arr[2]<arr[0]) or (arr[2]<arr[1] and arr[2]>arr[0])){ //if no is middle then swap to middle
        swap(arr[1],arr[2]);
    }
    for (int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}