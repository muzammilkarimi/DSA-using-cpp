#include<bits/stdc++.h>
using namespace std;
int main(){
    // Binary Search
    vector<int> vc;
    vc.push_back(1);
    vc.push_back(2);
    vc.push_back(4);
    vc.push_back(7);
    // cout<<binary_search(vc.begin(),vc.end(),4);
    // cout<<lower_bound(vc.begin(),vc.end(),3)-vc.begin(); 
    // cout<<upper_bound(vc.begin(),vc.end(),2)-vc.begin();
    for(int i:vc){
        // cout<<i<<" ";
    }cout<<endl;
    rotate(vc.begin(),vc.begin()+2,vc.end());
    for(int i:vc){
        // cout<<i<<" ";
    }cout<<endl;
    




    // map
    map<int,string> m;
    m[1]="muzammil";
    m[3]="ahmad";
    m[4]="karimi";
    m.insert({5,"maktech"});
    m.erase(5);
    for(auto i:m){
        // cout<<i.first<<" "<<i.second<<endl;
    }
    // cout<<m.count(3)<<endl;



    // set
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(8);
    st.insert(6);
    // cout<<st.size();
    for(int i:st){
        // cout<<i<<" ";
    }
    // cout<<st.count(6);
    



    
    // priority Queue

    priority_queue<int> maxi; // max heap 
    priority_queue<int,vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(5);
    maxi.push(4);
    maxi.push(3);
    mini.push(1);
    mini.push(5);
    mini.push(4);
    mini.push(3);
    // cout<<maxi.top();
    while(!maxi.empty()){
        // cout<<maxi.top()<<" ";
        maxi.pop();

    }cout<<endl;
    while(!mini.empty()){
        // cout<<mini.top()<<" ";
        mini.pop();

    }



    // Queue
    queue<int> q1;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q.swap(q1);
    // cout<<q.front()<<" ";
    // cout<<q.back()<<" ";
    // cout<<q.size()<<" ";
    while(!q.empty()){
        // cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    while(!q1.empty()){
        // cout<<q1.front()<<" ";
        q1.pop();
    }
    





    // stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.top();
    // s.pop();
    // cout<<s.top();
    cout<<s.size();
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    return 0;



    // list
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(2);
    l.push_front(2);
    for(int i:l){
        // cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin(),l.end());
    for(int i:l){
        // cout<<i<<" ";
    }

    // Deque
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        // cout<<i<<" ";
    }
    // cout<<d.at(0);
    // cout<<d.empty();
    d.erase(d.begin(),d.end());
    for(int i:d){
        // cout<<i<<" ";
    }
    //vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // for(int i:v){
    //     // cout<<i<<endl;
    // }
    // v.pop_back();
    // for(int i:v){
    //     cout<<i<<endl;
    // }
    // return 0;

}
