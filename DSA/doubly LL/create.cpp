#include<iostream>
using namespace std;
class Node {
 public: int data;
  Node*prev;
  Node*next;

  Node(int d){
              this->data=d;
              this->prev=NULL;
              this->next=NULL;
  }
};

  int getlen(Node*&head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
           len++;
           temp=temp->next;
    }
    cout<<endl<<"len of list is :"<<len<<endl;
    
  }
  void insertAtHead(Node*&head,int val){
           Node*temp=new Node(val);
           temp->next=head;
           head->prev=temp;
           head=temp;
  }
  void insertTail(Node*&tail,int val){
               Node*temp=new Node(val);
               tail->next=temp;
               temp->prev=tail;
               tail=temp;
               
  }
  void disp(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
  }
   void insertAtPos(Node*&head,Node*tail,int val,int p){
             Node*temp=new Node(val);
             if(p==1){
              insertAtHead(head,val);
              return;
             }
             int c=0;
             temp=head;
             while(c<p-1){
                temp=temp->next;  
             }

  }



int main(){
Node* node1 = new Node(10);
Node* head=node1;
Node* tail=node1;
disp(head);
insertTail(tail,20);
disp(head);
}





