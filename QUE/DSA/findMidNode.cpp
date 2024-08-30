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

int lenList(Node* &head){
   int cnt=0;
   Node*temp=head;
   while(temp!=NULL){
          cnt++;
          temp=temp->next;
   }
return cnt;

}


void findMidNode(Node* &head,int cnt){
Node* temp1=head;
int n=cnt/2;
   
    for(int i=0;i<n;i++){
             temp1=temp1->next;
    
}
    cout<<"mid Node of list is :"<<temp1->data<<endl;


}
int main(){
Node *node=new Node(10);
Node* head=node;
Node* tail=node;
// createNode(head,20);
// insertNode(tail,20);
// insertNode(tail,60);
// insertNode(tail,70);
insertNode(tail,30);
insertNode(tail,40);
insertNode(tail,50);
disp(head);
int cnt=lenList(head);
findMidNode(head,cnt);
}