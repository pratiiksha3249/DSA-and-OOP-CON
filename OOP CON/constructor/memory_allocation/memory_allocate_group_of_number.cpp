#include<iostream>
using namespace std;
int main(){
int *a,i,n;
cout<<"\n enter limit for numbers..";
cin>>n;
cout<<"\n enter numbers...";
a=new int[n];
//when we accept values when use just a not *a in array diff
for(i=0;i<n;i++){
cin>>a[i];
}

for( i=0;i<n;i++){
cout<<"\t"<<a[i];
}
return 0;
}