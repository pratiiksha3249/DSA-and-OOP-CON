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
  void insertend(Node*&head,int val){
           Node*temp=head;
           int c=1,i;


           for(i=0,temp=head;i<3,temp->next!=NULL;i++,temp=temp->next);
        cout<<endl<<temp->data;
            Node*newnode=new Node(val);
           temp->next=newnode;
           newnode->next=NULL;

           
  }


int main(){
Node* node1= new Node(10);
Node*head=node1;
Node*tail=node1;
insert(tail,20);
insert(tail,30);
insert(tail,40);
disp(head);
insertend(head,66);
cout<<endl;
disp(head);
}