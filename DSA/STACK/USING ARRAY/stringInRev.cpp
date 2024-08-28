#include<iostream>
#include<stack>
using namespace std;
class Stack{
        public:int top;
        int size;
        int *arr;

        Stack(int size){
                this->size=size;
                arr=new int[size];
                top=-1;
        }

        void push(int val){
               if(size-top>1){
                top++;
                arr[top]=val;
               }
               else{
                cout<<"stack is overflow..."<<endl;
               }
        }
      void pop(){
           if(top!=-1){
                cout<<"poped value is :"<<arr[top]<<endl;
                top--;
           }else{
                cout<<"stack is underflow..."<<endl;
           }


      }
      void peek(){
        if(top!=-1){
                cout<<"peek valus is :"<<arr[top]<<endl;
        }
        else{
                cout<<"stack is underflow..."<<endl;
        }
      }

      void isEmpty(){
        if(top==-1){
                cout<<"stack is empty..."<<endl;
        }
        else{
                cout<<"stack is not empty..."<<endl;
        }
      }
};
int main(){
Stack st(5);
st.push(20);
st.push(30);
st.push(40);
st.pop();
st.pop();
st.pop();


}