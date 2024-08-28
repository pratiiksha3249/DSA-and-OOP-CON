#include<iostream>
using namespace std;
class Node{
public:int data;
       Node* prev;
       Node* next;

       Node(int val){
             this->data=val;
             this->next=NULL;
             this->prev=NULL;
       }
};

void creatHead(Node* &head,int val){
                 Node *newnode=new Node(val);
                 newnode->next=head;
                 head->prev=newnode;
                 head=newnode;
}
void insertAtTail(Node* &tail,int val ){
           Node* newnode=new Node(val);
           tail->next=newnode;
           newnode->prev=tail;
           tail=newnode;
}
void disp(Node* &head){
Node* temp=head;
while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
}
cout<<endl;


}
int main(){
Node* node=new Node(10);
Node* head=node;
Node* tail=node;
// creatHead(head,20);
// disp(head);
// creatHead(head,30);
// disp(head);

insertAtTail(tail,30);
disp(head);
insertAtTail(tail,40);
disp(head);
// insertAtTail(tail,50);
disp(head);



}