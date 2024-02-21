#include<bits/stdc++.h>
using namespace std;
class car{
    private:
    string name;
    public:

    void setname(string s){
        name=s;
    }
    void print(){
        cout<<"name is "<<name<<endl;
    }
};
int main(){
    car c;
    c.setname("BMW");
    c.print();
    return 0;
}