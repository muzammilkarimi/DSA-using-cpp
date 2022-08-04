#include <bits/stdc++.h>
using namespace std;
//find 2 non repeating elements other are repeat two times
void uniqueof2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int mask = xorsum & -xorsum;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (mask & arr[i])
        {
            x ^= arr[i];
        }
        else
        {
            y ^= arr[i];
        }
    }
    cout << x << endl
         << y;
}
//find unique number where other elements are repeat k times
int uniqueofk(int arr[], int n, int k)
{
    int intsize = 32;
    int count[32];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] & (1 << i))
            {
                count[i]++;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        res += (count[i] % k) * (1 << i);
    }
    return res;
}
//find a subset
void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
}
int main()
{
    // int arr[]={1,2,3,4,5,4};
    // subset(arr,sizeof(arr)/sizeof(arr[0]));
    // int ans=1;
    // for(int i=1; i<=26; i++){
    //     ans*=2;
    // }
    // cout<<ans;
    // subset(arr,3);
    // int arr[11]={1,1,1,2,2,2,1,2,1,2,35};
    // cout<<uniqueofk(arr,11,5);
    // int arr[6]={1,1,2,2,3,4};
    // uniqueof2(arr,6);

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int k=i; k<n; k++){
    //         cout <<"  ";
    //     }
    //     for (int j=1; j<=2*i-1; j++){
    //         cout <<" *";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // bool flag = false;
    // for(int i=2; i<n/2; i++){
    //     if(n%i==0){
    //         flag=true;
    //     }
    // }
    // if(flag){
    //     cout<<"not prime number"<<endl;
    // }
    // else{
    //     cout<<"prime number"<<endl;
    // }
    // bubble sort
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // int counter = 1;
    // while(counter<n){
    //     for(int i=0; i<n-counter; i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     counter ++;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // // int n,ans=0;
    // // cin>>n;
    // // while(n>0){
    // //     int ld = n%10;
    // //     ans = ans*10 + ld;
    // //     n/=10;
    // // }
    // // cout<<ans<<endl;
    /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/    
bool flag = 0;
int n=11;
if(n==0 || n==1){
        flag = 1;
        
    }
for(int i=2; i<=n/2; i++)
{
    if(n%i==0){
        flag = 1;
        break;
    }
    

}
if(flag == 1){
    cout<<"non prime"<<endl;
}   
else{
    cout<<"prime"<<endl;
}
    
    return 0;
}