#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"\n i am constructor of a";
    }
};
class B:public A{
    public:
    B(){
        cout<<"\n i am constructor of b";
    }
};
int main(){
//if u create a object of base class then u can just memory allocate to the base class
// if u create a ob of derived class then fist memory allocate to the base class then derived class
B ob;

}