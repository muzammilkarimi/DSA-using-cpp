#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data = val;
        this -> next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
void printrev(node* &head){
    if(head==NULL) return;
    printrev(head->next);
    cout<<head->data<<" ";
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    printrev(head);

}