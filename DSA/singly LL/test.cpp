#include<iostream>
using namespace std;
 class Node{
  public:
  int data;
  Node* next;

  Node(int data){
       this->data=data;
       this->next=NULL;
  } 
};
 void insert(Node* &tail,int d){
            Node* temp=new Node(d);
              tail->next=temp;
              tail=temp;
            
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
Node* node1=new Node(10);
//head mdhe node1 chi value takli first time

Node* head=node1;
Node* tail=node1;
// cout<<node1->data;

insert(tail,20);
insert(tail,30);
insert(tail,40);
disp(head);

}