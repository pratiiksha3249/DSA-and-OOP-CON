#include<iostream>
using namespace std;
 class Node{
    public: int data;
           Node*next;

           Node(int data){
               this->data=data;
               this->next=NULL;

           }  
           ~Node(){
                  int value=this->data;
                  if(this->next !=NULL){
                    delete next;
                    this->next=NULL;
                  }
                  cout<<"delete node is :"<<value<<endl;
           }             
 };

 void headCreate(Node*&head,int d){
           Node*temp=new Node(d);
           temp->next=head;
           head=temp;

               
 }
  void insert(Node*&tail,int val){
    Node*newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;

  }
  

  void disp(Node* &head){
    Node*temp=head;

    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<" ";

  }
 void delpos(Node*&head,int p,Node*&tail){
  //this code for first possition 
      if(p==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
      }
      else{
        //this code for between 2-last node
           Node*current=head;
           Node*prev=NULL;
           int c=1;
           while(c<p){
                prev=current;
                current=current->next;
                c++;
           }
           prev->next=current->next;
           current->next=NULL;
           delete current;


      }
      
  
 };

int main(){
Node* node1= new Node(10);
Node*head=node1;
Node*tail=node1;
insert(tail,20);
insert(tail,30);
insert(tail,40);
insert(tail,50);
insert(tail,60);
disp(head);
cout<<endl;
delpos(head,6,tail);
disp(head);
}