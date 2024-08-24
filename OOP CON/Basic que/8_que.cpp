#include<iostream>
using namespace std;
int main(){
 int n,i,s=0;
 cout<<"enter limit...";
 cin>>n;
 for(i=1;i<=n;i++){
    s=s+i*i;
 }
cout<<s;


    return 0;
}