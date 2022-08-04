#include <bits/stdc++.h>
using namespace std;
int main(){
    int hh,mm,ss;
    char ch,ap;
    cin>>hh>>ch>>mm>>ch>>ss>>ap>>ch;
    hh=(ap=='A') ? ((hh==12)?(hh=0):(hh=hh)) : ((hh==12)?(hh=12):(hh=hh+12));
    cout<<setw(2)<<setfill('0')<<hh<<":";
    cout<<setw(2)<<setfill('0')<<mm<<":";
    cout<<setw(2)<<setfill('0')<<ss;
    return 0;
}