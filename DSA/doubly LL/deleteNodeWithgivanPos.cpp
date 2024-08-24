#include<iostream>
using namespace std;
class Node{
       public:int data;
              Node*prev;
              Node*next;
              Node(int d){
                    this->data=d;
                    this->prev=NULL;
                    this->next=NULL;
              }
              ~Node(){
             int val=this->data;
             if(next!=NULL){
                delete next;
                next=NULL;
             }
cout<<"delete node :"<<val<<" ";

              }
};

void insertAttail(Node*&tail,int val){
             
               Node*newnode=new Node(val);
               tail->next=newnode;
               newnode->prev=tail;
               tail=newnode;
}

void disp(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
  }
 void deleteAtpos(Node*&head,Node*&tail,int pos){
                if(pos==1){
                Node*temp=head;
                head=head->next;
                temp->next=NULL;
                delete temp;
                return ;
                } 
                    int c=1;
                    Node*temp=head;
             while(c<pos-2){
                   temp=temp->next;
                   c++;

             }
            //  cout<<temp->data<<"--"<<endl;

             Node*temp1=temp->next;

             temp->next=temp1->next;
             temp1->next->prev=temp;
             temp1->next=NULL;
             delete temp1;             
 }

int main(){
Node*node1=new Node(10);
Node*head=node1;
Node*tail=node1;
disp(head);

insertAttail(tail,20);
disp(head);

insertAttail(tail,30);
disp(head);

insertAttail(tail,40);
disp(head);

insertAttail(tail,50);
disp(head);

//   deleteAtpos(head,tail,5);
//   cout<<endl;
//   disp(head);
  deleteAtpos(head,tail,6);
  cout<<endl;
  disp(head);
  


}