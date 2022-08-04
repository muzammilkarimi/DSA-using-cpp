#include<bits/stdc++.h>
using namespace std;
int main (){
    int p1r1,p1r2,p1r3,p2r1,p2r2,p2r3,p3r1,p3r2,p3r3;
    cin>>p1r1>>p2r1>>p3r1>>p1r2>>p2r2>>p3r2>>p1r3>>p2r3>>p3r3;
    int playerone=0,playertwo=0,player3=0;
    playerone=(p1r1+p1r2+p1r3)/3;
    playertwo=(p2r1+p2r2+p2r3)/3;
    player3=(p3r1+p3r2+p3r3)/3;
    if (playerone<=100 and playertwo<=100 and player3<=100){
    if(playerone>=playertwo and playerone>=player3 and playerone>=70){
        cout<<"playerone"<<endl;
    }
    if(playertwo>=playerone and playertwo>=player3 and playertwo>=70 ){
        cout<<"playertwo"<<endl;
    }
    if(player3>=playerone and player3>=playertwo and player3>=70){
        cout<<"playerthree"<<endl;
    }
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}