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

            if(top==size-1){
                cout<<"stack is overflow...";
            }
            else{
                top++;
                arr[top]=val;
            }
 
              }

              void pop(){
                if(top!=-1){
                    cout<<"poped value is "<<arr[top]<<endl;
                    top--;
                }
                else{
                    cout<<"stack is underflow..."<<endl;
                }
              }
              void peek(){
                if(top!=-1){
                     cout<<"peek value is :"<<arr[top]<<endl;
                }
                else{
                    cout<<"stack is empty"<<endl;
                }
              }

              void isEmpty(){
                if(top==-1){
                    cout<<"stack is empty... "<<endl;
                }
                else{
                    cout<<"stack is not empty...."<<endl;
                }
              }


};

int main(){
// Stack ob=new Stack(5);
Stack st(5);
st.push(10);
st.push(20);
st.push(30);
st.push(40);

st.pop();
st.pop();
st.pop();
st.peek();
}
