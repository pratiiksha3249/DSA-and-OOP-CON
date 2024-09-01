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


void delNode(Node* &head,Node* &tail,int len,int n){
Node* temp=head;
int n1=len-n-1;
int c=0;
while(c!=n1){
    temp=temp->next;
    c++;
}
tail=temp;
temp->next=NULL;

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
cout<<"original list is :"<<endl;
disp(head);
int len=lenList(head);
int n=4;
cout<<"accept limit for del node :"<<endl;
cin>>n;
cout<<"updated list is :"<<endl;
delNode(head,tail,len,n);

}