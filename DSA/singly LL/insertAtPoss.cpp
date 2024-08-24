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
  void insertpos(Node*&head,int p,int val){
           Node*temp=head;
           int c=1;
           while(c<p-1){
                temp=temp->next;
                c++; 
           }
                
           Node*newnode=new Node(val);
            newnode->next=temp->next;
              temp->next=newnode;
     
  }
int main(){
Node* node1= new Node(10);
Node*head=node1;
Node*tail=node1;
insert(tail,20);
insert(tail,30);
insert(tail,40);
disp(head);
insertpos(head,4,66);
cout<<endl;
disp(head);
}