#include<iostream>
using namespace std;
class Node{
         public:  int data;
           Node*next;
         Node(int d){
            this->data=d;
            this->next=NULL;
         }
         ~Node(){
         int value=this->data;
         if(this->next!=NULL){
            delete next;
            next=NULL;
         }
         cout<<"memory free :"<<value;
         }

};
void insertNode(Node* &tail,int val,int elm){
      Node*newnode= new Node(val);
      if(tail==NULL){
           tail=newnode;
           newnode->next=newnode;
      }
      
      else{

        Node*curr=tail;
        while(curr->data!=elm){
                   curr=curr->next;
        }
                    
                     Node*temp= new Node(val);
                     temp->next=curr->next;
                     curr->next=temp;
                    // Node*temp;
                    // tail=temp;

                    // tail->next=newnode;
                    // newnode->next=temp;
      }

}
void disp(Node* &tail){
            Node*temp=tail;
            do{
                cout<<temp->data<<" ";
                temp=temp->next;
            }while(temp!=tail);
            cout<<endl;
}

int main(){
    Node*tail=NULL;
// Node* node1=new Node(10);
// disp(tail);

insertNode(tail,20,1);
disp(tail);

insertNode(tail,30,20);
disp(tail);






}