#include <bits/stdc++.h>
using namespace std;
//=======TO ADD NATURAL NUMBER TILL N=============
// int add(int n){
//     if(n==1){
//         return 1;
//     }
//     int previousadd=add(n-1);
//     return n+previousadd;
// }

//=======TO PRINT HELLO N TIMES===============
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"hello"<<endl;
//     print(n-1);
// }

//=======TO PRINT "B" POWER OF "A" NUMBER==========
int power(int a, int b){
    if(b==0){
        return 1;
    }
    int previouspower=power(a,b-1);
    return a*previouspower;
}

//=======TO FIND FACTORIAL OF N NUMBER=========
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     // int previousfact=factorial(n-1);
//     // return n*previousfact;
//     return n*factorial(n-1);
// }

//=====TO FIND FIBONACCI OF N NUMBER========
// int  fibonacci(int n){
//     if(n==1 or n==0){
//         return n;
//     }
//     // int sum=fibonacci(n-1)+fibonacci(n-2);
//     // return sum;
//     return fibonacci(n-1)+fibonacci(n-2);
// }

//======TO FIND GIVEN ARRAY IS SORTED OR NOT=====
// bool sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray=sorted(arr+1,n-1);
//     // if(arr[0]<arr[1] and restArray){
//     //     return true;
//     // }
//     // return false;
//     return (arr[0]<arr[1] and restArray);
// }

//======TO PRINT NUMBER TILL N IN DECREASING ORDER======
// void printdec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     printdec(n-1);
// }

//======TO PRINT NUMBER TILL N IN INCREASING ORDER======
// void printinc(int n){
//     if(n==0){
//         return;
//     }
//     printinc(n-1);
//     cout<<n<<endl;
// }

//=========REVERESE A STRING=========================
// void rev(string s){
//     if(s.length()==0){
//         return;
//     }
//     string rest =s.substr(1);
//     rev(rest);
//     cout<<s[0];
// }

//========REPLACE PI TO 3.14=========
// void replacepi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' and s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replacepi(s.substr(1));
//     }
// }

//=========TOWER OF HANIO==========
// void towerofhanoi(int n,char src,char dest,char helper){
//     if(n==0){
//         return;
//     }
//     towerofhanoi(n-1,src,helper,dest);
//     cout<<"move from "<<src<<" to "<<dest<<endl;
//     towerofhanoi(n-1,helper,dest,src);
// }

//=======REMOVE THE DUPLICATE ELEMENTS FROM STRING=====
// string removedup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = removedup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     else{
//         return (ch+ans);
//     }
// }

//=======MOVE ALL X TO THE END =========
// string movex(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char x = s[0];
//     string ans = movex(s.substr(1));
//     if (x == 'x')
//     {
//         return (ans + x);
//     }
//     else
//     {
//         return (x + ans);
//     }
// }

//=======PRINT ALL SUBSTRING===========
// void substring(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string rest=s.substr(1);
//     substring(rest,ans);
//     substring(rest,ans+ch);
// }
// void substring2(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     int code=ch;
//     string rest=s.substr(1);
//     substring2(rest,ans);
//     substring2(rest,ans+ch);
//     substring2(rest,ans+to_string(code));
// }

//======PRINT PERMUTATION======
// void permutation(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0; i<s.length(); i++){
//         char ch=s[i];
//         string rest=s.substr(0,i)+s.substr(i+1);
//         permutation(rest,ans+ch);
//     }
// }

//=====FIND THE PATH COUNTER=========
// int countpath(int s, int e){
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count =0;
//     for(int i=1; i<=6; i++){
//         count +=countpath(s+i,e);
//     }
//     return count;
// }

//=======FIND PATH IN MAZE===
int pathcountmaze(int n, int i,int j){
    if(i==n-1 and j==n-1){
        return 1;
    }
    if(i>=n or j>=n){
        return 0;
    }
    return pathcountmaze(n,i+1,j)+pathcountmaze(n,i,j+1);
}
int main()
{
    // cout<<add(5);
    // print(5);
    cout<<power(5,3);
    // cout<<factorial(4);
    // cout<<fibonacci(50);
    // int arr[5]={1,3,5,6,10};
    // if(sorted(arr,5)){
    //     cout<<"sorted";
    // }
    // else{
    //     cout<<"unsorted";
    // }
    // printdec(10);
    // cout<<endl;
    // printinc(10);
    // string s;
    // cin>>s;
    // rev(s);
    // replacepi("pipppip");
    // towerofhanoi(4,'s','d','h');
    // string s="aaaabbbcccddde";
    // cout<<removedup(s);
    // string s = "xxnxssjxxxhd";
    // cout << movex(s);
    // substring("ABC","");
    // cout<<endl;
    // substring2("ABC","");
    // cout<<endl;
    // return 0;
    // permutation("abc","");
    // cout<<countpath(0,3);
    // cout<<pathcountmaze(3,0,0);

}