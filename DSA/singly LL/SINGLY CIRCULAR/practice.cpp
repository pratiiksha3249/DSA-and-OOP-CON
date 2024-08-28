#include<iostream>
using namespace std;
class Node{
        public: int data;
         Node *next;

         Node(int val){
              this->data=val;
              this->next=NULL;
         }
};

void insertAtHead(Node* &head,int val){
                   Node *newnode=new Node(val);
                   newnode->next=head;
                   head=newnode;

}
void insertNode(Node* &tail,int val){
                    Node*newnode=new Node(val);
                     tail->next=newnode;
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
Node* node =new Node(10);
Node* head=node;
Node* tail=node;
insertNode(tail,20);
disp(head);
insertNode(tail,30);
disp(head);
insertNode(tail,40);
disp(head);
}