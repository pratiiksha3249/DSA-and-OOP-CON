#include<iostream>
using namespace std;
int main(){
int a,b,ch;
cout<<"enter no1..";
cin>>a;
cout<<"enter no2..";
cin>>b;
cout<<"1=add\n 2=sub\n3=mul\n enter choice..";
cin>>ch;
switch(ch){
case 1:

cout<<"add="<<a+b;
 break;
 case 2:
cout<<"\nsub="<<a-b;
 break;
case 3:
cout<<"\nmul="<<a*b;
break;
}
    return 0;
}