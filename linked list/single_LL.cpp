#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        this -> data=val;
        this -> next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void print(node* &  head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1 = new node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    node* head = node1;
    print(head);
    insertAtHead(head,20);
    print(head);
    return 0;
}