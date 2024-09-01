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
void createNode(Node* &head,int val){
  Node*newnode=new Node(val);
   newnode->next=head;
   head=newnode;
}
void insertNode(Node* &tail,int val){
        Node* newnode=new Node(val);
        tail->next=newnode;
        tail=newnode;
}
void disp(Node* &head){
      Node*temp=head;
      while(temp!=NULL){
           cout<<temp->data<<" ";
           temp=temp->next;
      }

}

void concat(Node* &head,Node* &head1,Node* &tail){
    Node* temp=head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
tail=temp;
tail->next=head1;
}



int main(){
Node *node=new Node(10);
Node* head=node;
Node* tail=node;

insertNode(tail,20);
insertNode(tail,30);
cout<<"first list is :"<<endl;
disp(head);

cout<<endl<<"secound list is :"<<endl;
Node *node2=new Node(40);
Node*head1=node2;
Node*tail1=node2;

// insertNode(tail1,40);
insertNode(tail1,50);
insertNode(tail1,60);

disp(head1);
cout<<endl;

// cout<<"temp take place here :";
concat(head,head1,tail);
cout<<"concate list is :"<<endl;
disp(head);
}