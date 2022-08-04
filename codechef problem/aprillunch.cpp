#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sar=0,anu=0;
        string temp = "EQUINOX";
        int n,a,b;
        cin>>n>>a>>b;
        while(n--){
            string s;
            cin>>s;
            bool flag=0;
            for(int i=0; i<7; i++){
                if(s[0]==temp[i]){
                    flag=1;
                    break;
                }
            }
            if(flag){
                sar+=a;
            }
            else{
                anu+=b;
            }

        }
        if(sar==anu){
            cout<<"DRAW"<<endl;
        }
        else if(sar>anu){
            cout<<"SARTHAK"<<endl;
        }
        else{
            cout<<"ANURADHA"<<endl;
        }
    }
    return 0;
}