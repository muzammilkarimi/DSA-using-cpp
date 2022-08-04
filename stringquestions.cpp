#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="asdfdjhsjdhsdnvjbgh";
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int i=0; i<26; i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans;
    // string s="1354365456";
    // sort(s.begin(),s.end());//to sort max order
    // sort(s.begin(),s.end(),greater<int>(o0));//to sort min order
    // cout<<s<<endl;
    // string str="muzammil";
    // transform(str.begin(),str.end(),str.begin(),::toupper);//for convert upper case
    // cout<<str<<endl;
    // transform(str.begin(),str.end(),str.begin(),::tolower);//for convert upper case
    // // for(int i=0; i<str.size(); i++){
    // //     if(str[i]>='a' and str[i]<='z'){
    // //         str[i]-=32;
    // //     }
    // //     else if(str[i]>='A' and str[i]<='Z'){
    // //         str[i]+=32;

    // //     }

    // // }
    // cout<<str;

    return 0;
}