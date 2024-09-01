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
      cout<<endl;
}



 void delNode(Node* &head,int pos)
{
//count number of node in list 
int cnt=0;
Node* temp1=head;
int c=0;

   Node*temp=head;
   while(temp!=NULL){
          cnt++;
          temp=temp->next;
   }


//delete node from givan position
int p=cnt-pos-1;


while(c!=p){
        temp1=temp1->next;
        c++;
}

temp1->next=temp1->next->next;
disp(head);
}



int main(){
Node *node=new Node(10);
Node* head=node;
Node* tail=node;

insertNode(tail,20);
insertNode(tail,30);
insertNode(tail,40);
insertNode(tail,50);
insertNode(tail,60);
insertNode(tail,70);
disp(head);
cout<<endl;
int pos;
cout<<"enter pos to delete node :"<<endl;
cin>>pos;

delNode(head,pos);
}