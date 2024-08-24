#include<iostream>
using namespace std;
int main(){
    int n,n1,s=0,d;
// cout<<"enter limit...";
// cin>>n;

for(n=1;n<=1000;n++){
    s=0;
    n1=n;

 while(n1>0){
d=n1%10;
s=s+d*d*d;
n1=n1/10;
}

if(n==s){
    cout<<n<<"\n";
}
}
    return 0;
}