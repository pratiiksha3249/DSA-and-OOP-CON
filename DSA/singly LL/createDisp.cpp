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

void insert(Node* &head,int d){
   Node* temp=new Node(d);
   temp->next=head;
   head=temp;


}
void disp(Node* &head){
Node*temp=head;
while(temp->next!=NULL){
cout<<temp->data<<" ";
temp=temp->next;

}
cout<<" ";

}
int main(){
//create newnode
Node* node1=new Node(10);

//first time
//head pointed to node1
Node*head=node1;
cout<<node1->data;
disp(head);
insert(head,20);
disp(head);
}
