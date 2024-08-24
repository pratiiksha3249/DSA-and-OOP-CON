#include<iostream>
using namespace std;
class Node{
  public: int data;
   Node*next;
   Node*prev;

   Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
   }
};

void insertAtHead(Node*&head,int d){

               Node* temp = new Node(d);
               temp->next=head;
               head->prev=temp;
               head=temp;
}
void insertAtTail(Node*&tail,int d){
                 Node*temp=new Node(d);
                 tail->next=temp;
                 temp->prev=tail;
                 tail=temp;
}
void countLen(Node*&head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    cout<<"len :"<<len;
}
void disp(Node*&head){
           Node*temp=head;
           while(temp!=NULL){
                 cout<<temp->data<<" ";
                 temp=temp->next;
           }
           cout<<endl;
}
void insertAtPos(Node*&tail,Node*&head,int val,int pos){

  Node*temp=new Node(val);
  if(pos==1){
    // cout<<"calling->";

    insertAtHead(head,val);
    
    return ;
  }
  
          int c=1;
          Node*curr=head;
          while(c<pos-1){
            curr=curr->next;
            c++;
          }

          if(curr->next==NULL){
            // cout<<"calling->";
                insertAtTail(tail,val);
                 
          }

          temp->next=curr->next;
          curr->next->prev=temp;
          curr->next=temp;
          temp->prev=curr;

  }





int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    // insertAtHead(head,20);
    // disp(head);
    // insertAtTail(tail,20);
    // disp(head);
    
    insertAtPos(tail,head,20,2);
    disp(head);

    insertAtPos(tail,head,30,3);
    disp(head);
    
    insertAtPos(tail,head,40,4);
    disp(head);

    insertAtPos(tail,head,50,5);
    disp(head);
    


}