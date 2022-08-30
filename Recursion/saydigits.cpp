#include <bits/stdc++.h>
using namespace std;
void saydigit(long long int n, string arr[])
{
    //base case
    if(n==0){
        return ;
    }
    // processing
    int digit = n%10;
    n=n/10;
    //Recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    long long int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(n, arr);
    return 0;
}