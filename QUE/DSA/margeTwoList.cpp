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
int lenList(Node* &head){
   int cnt=0;
   Node*temp=head;
   while(temp!=NULL){
          cnt++;
          temp=temp->next;
   }
return cnt;

}

void margeList(Node* &head,Node* &head1,int cnt){
Node*add=head;
Node*temp=head1,*temp1;

for(int i=1;i<=cnt;i++){
add=add->next;

while(add->data<temp->data && temp->data<add->next->data){
               add->next=temp->next;
               temp=temp->next;
               temp1=temp->next;
}
}
           disp(head);
}

int main(){
Node *node=new Node(10);
Node* head=node;
Node* tail=node;

insertNode(tail,30);
insertNode(tail,50);
cout<<"first list is :"<<endl;
disp(head);

cout<<endl<<"secound list is :"<<endl;
Node *node2=new Node(20);
Node*head1=node2;
Node*tail1=node2;

// insertNode(tail1,40);
insertNode(tail1,40);
insertNode(tail1,60);

disp(head1);
cout<<endl;
int cnt=lenList(head);
margeList(head,head1,cnt);

}