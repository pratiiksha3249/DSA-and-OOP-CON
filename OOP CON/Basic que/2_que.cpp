#include<iostream>
using namespace std;
int main(){
  int n,f=0,s=1,t;
  cout<<"enter limit..";
cin>>n;
cout<<f<<"\t"<<s;
for(int i=1;i<n;i++){
t=f+s;
cout<<"\t"<<t;
f=s;
s=t;
}

    return 0;
}