#include<iostream>
using namespace std;
int main(){
    int i,n,a[20];
    cout<<"enter num...";
    cin>>n;

    while(n>0){
        a[i++]=n%2;
        n=n/2;
    }
     cout<<"binary number...";
     for(i=i-1;i>=0;i--){
        cout<<a[i];
     }

    return 0;
}