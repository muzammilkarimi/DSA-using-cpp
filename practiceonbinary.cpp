#include <bits/stdc++.h>
using namespace std;
void decimaltobinary(int n)
{
    int arr[20];
    int i = 0;
    while (n != 0)
    {
        arr[i] = n % 2;
        i++;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
}
void decimaltooctal(int n)
{
    int arr[20];
    int i = 0;
    while (n != 0)
    {
        arr[i] = n % 8;
        i++;
        n /= 8;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
}
int binarytodecimal(int n)
{
    int ans = 0, last = 0, pow = 1;
    while (n != 0)
    {
        last = n % 10;
        ans += last * pow;
        pow *= 2;
        n /= 10;
    }
    return ans;
}
int octaltodecimal(int n)
{
    int ans = 0, last = 0, pow = 1;
    while (n != 0)
    {
        last = n % 10;
        ans += last * pow;
        pow *= 8;
        n /= 10;
    }
    return ans;
}
void decimaltohexa(int n)
{
    char ans[50];
    int i = 0;
    while (n != 0)
    {
        int rem = n % 16;
        if (rem < 10)
        {
            ans[i++] = rem + 48;
        }
        else
        {
            ans[i++] = rem + 55;
        }
        n /= 16;
    }
    for (int j = i; j >= 0; j--)
    {
        cout << ans[j];
    }
}
int hexatodecimal(char n[])
{
    int ans = 0;
    int pow = 1;
    int s = strlen(n);
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' and n[i] <= '9')
        {
            ans += pow * (n[i] - 48);
        }
        else if (n[i] >= 'A' and n[i] <= 'F')
        {
            ans += pow * (n[i] - 55);
        }
        pow *= 16;
    }
    return ans;
}
int main()
{
    char arr[] = "19";
    cout << hexatodecimal(arr);
    decimaltohexa(25);
    // cout<<octaltodecimal(41);
    // decimaltooctal(33);
    // decimaltobinary(5);
    // cout<<binarytodecimal(101);
    

    return 0;
}