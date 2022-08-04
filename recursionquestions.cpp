#include<bits/stdc++.h>
using namespace std;
//print add natural numbers till n
int add(int n){
    if(n==1){
        return 1; 
    }
    int prevadd=add(n-1);
    return prevadd + n;
}
//print n times hello
void hello(int n){
    if(n==0){
        return;
    }
    cout<<"hello mak"<<endl;
    hello(n-1);
}
// print power of a number
int power(int a,int p){
    if(p==0){
        return 1;
    }
    return a*power(a,p-1);
}
//print factorial of n number
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
//print fabonacci of n number
int fabo(int n){
    if(n==1 or n==0){
        return n;
    }
    return fabo(n-1)+fabo(n-2);
}
//to find array is sorted or not
bool issort(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarr=issort(arr+1,n-1);
    return(arr[0]<arr[1] and restarr);

}
//print number in decreasing order
void printdec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printdec(n-1);
}
//print number in increasing order
void printinc(int n){
    if(n==0){
        return;
    }
    printinc(n-1);
    cout<<n<<endl;
}
//reverse a string 
void rev(string s){
    if(s.length()==0){
        return;
    }
    string rest=s.substr(1);
    rev(rest);
    cout<<s[0];
}
// replace pi to 3.14
void replacepi(string s){
    if(s.length()==0){
        return ;
    }
    if(s[0]=='p' and s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
//tower of hanoi
void toh(int n, string src,string dest,string hlp){
    if(n==0){
        return;
    }
    toh(n-1,src,hlp,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    toh(n-1,hlp,dest,src);
}
//remove duplicate elements
string dup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string rest=dup(s.substr(1));
    if(ch==s[1]){
        return rest;
    }

    else{
        return (ch+rest);
    }

}
//move all x to end
string movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=movex(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    } 
    else{
        return (ch+ans);
    }
}
//print all substring 
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string rest=s.substr(1);
    substring(rest,ans);
    substring(rest,ans+ch);

}
//print permutation 
void per(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        string rest=s.substr(0,i)+s.substr(i+1);
        per(rest,ans+ch);
    }
}
int main(){
    per("abc","");
    // substring("abc","");
    // cout<<movex("xxxmxaxkx");
    // cout<<dup("mmmmmmmmmmmmmuzammilkkkkkkkarimi");
    // toh(3,"source","destination","helper");
    // replacepi("makpipi");
    // rev("muzammil");
    // printdec(10);
    // cout<<"increasing order\n";
    // printinc(10);

    // int arr[5]={1,2,6,4,5};
    // if(issort(arr,5)){
    //     cout<<"sorted";
    // }
    // else{
    //     cout<<"not sorted";
    // }
    // cout<<fabo(4);//0 1 1 2 3 5
    // cout<<fact(5);
    // cout<<power(2,26);
    // cout<<add(5);
    // hello(5);

    return 0;

}