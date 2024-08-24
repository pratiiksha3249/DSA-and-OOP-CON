#include<iostream>
using namespace std;
int main(){
int *a;
//memory give to only single veriable...
a=new int;
cout<<"\n enter value to pointer veriable...";
cin>>*a;
cout<<"\n value of pointer veriable="<<*a;
return 0;
}