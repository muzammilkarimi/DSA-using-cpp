#include <bits/stdc++.h>
using namespace std;
int squareroot(int n)
{
    int s = 0, e = n, ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int n, int precision, int intsol){
    double factor = 1 ;
    double ans = intsol;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for (double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    long long int n=27;
    long long int intsol= squareroot(n);
    cout<<"The Answer is "<<moreprecision(n,10,intsol);

    return 0;
}