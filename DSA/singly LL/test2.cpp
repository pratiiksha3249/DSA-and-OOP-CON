#include<iostream>
using namespace std;
 class Node{
    public: int data;
           Node*next;

           Node(int data){
               this->data=data;
               this->next=NULL;

           }
                
 };
 void headCreate(Node*&head,int d){
           Node*temp=new Node(d);
           temp->next=head;
           head=temp;

               
 }
  void insert(Node*&tail,int val){
    Node*newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;

  }
  void disp(Node* &head){
    Node*temp=head;

    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<" ";

  }
int main(){
Node* node1= new Node(10);
Node*head=node1;
Node*tail=node1;
insert(tail,20);
insert(tail,30);
insert(tail,40);
disp(head);
}