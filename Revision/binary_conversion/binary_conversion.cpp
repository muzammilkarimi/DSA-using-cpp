#include <bits/stdc++.h>
using namespace std;
void binary_to_decimal(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int last_digit = n % 10;
        ans += pow * last_digit;
        n = n / 10;
        pow *= 2;
    }
    cout <<"binary to decimal -> "<< ans<<endl;
}
void octal_to_decimal(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int last_digit = n % 10;
        ans += pow * last_digit;
        n = n / 10;
        pow *= 8;
    }
    cout <<"octal to decimal -> "<< ans<<endl;
}
void decimal_to_binary(int n){
    vector<int> ans;
    while(n>0){
        ans.push_back(n%2);
        n=n>>1;
    }
    cout<<"decimal to binary -> ";
    for(int j=ans.size()-1; j>=0; j--){
        cout<<ans[j]<<" ";
    }cout<<endl;
    
}
void decimal_to_octal(int n){
    vector<int> ans;
    while(n>0){
        ans.push_back(n%8);
        n=n/8;
    }
    cout<<"decimal to octal -> ";
    for(int j=ans.size()-1; j>=0; j--){
        cout<<ans[j]<<" ";
    }cout<<endl;
    
}
void hexadecimal_to_decimal(string s){
    int ans=0, pow=1;
    int n=s.size();
    for(int i=n-1; i>=0; i--){
       if(s[i]>='0' and s[i]<='9'){
        ans+=pow*(s[i]-'0');
       }
       else if(s[i]>='A' and s[i]<='F'){
        ans+=pow*(s[i]-'A'+10);
       }
       pow*=16;
    }
    cout<<"hexadecimal to decimal -> "<<ans<<endl;
}
void decimal_to_hexadecimal(int n){
    vector<char> ans;
    while(n!=0){
        int remainder=n%16;
        if(remainder<10){
            ans.push_back(remainder+48);
        }
        else{
            ans.push_back(remainder+55);
        }
        n/=16;
    }
    cout<<"decimal to hexadecimal -> ";
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }

}
int main()
{
    binary_to_decimal(101);
    decimal_to_binary(5);
    octal_to_decimal(72);
    decimal_to_octal(58);
    hexadecimal_to_decimal("10F");
    decimal_to_hexadecimal(271);
    return 0;
}