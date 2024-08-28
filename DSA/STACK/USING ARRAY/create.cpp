#include<iostream>
#include<stack>
using namespace std;
class Stack{
           public:int *arr;
           int top;
           int size;
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
                cout<<"stack is overflow...";
             }
           }
           void pop(){
            if(top!=-1){
                cout<<"poped values is "<<arr[top]<<endl;
                top--;
                // cout<<"poped value is :"<<arr[top];
            }
            else{
                cout<<"stack is underflow..";
            }
           }

           int  peek(){
            if(top!=-1){
                return arr[top];
            }
            else{
                cout<<"stak is empty...";
            }
           



           }
      bool isEmpty(){
                if(top==-1){
                    cout<<"stack is empty..";
                }
                else{
                    cout<<"stack is not empty...";
                }

      }

};

int main(){
Stack st(5);
st.push(10);
st.push(20);
st.push(30);
cout<<"peek element is :"<<st.peek()<<endl;
st.pop();
st.pop();
st.pop();
st.pop();


}