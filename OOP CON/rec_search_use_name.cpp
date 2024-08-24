#include<iostream>
#include<string.h>
using namespace std;
class emp{
public :
int eno;
char ename[20];
float sal;

void accept(){
 cout<<"\n eno ename sal....";
 cin>>eno>>ename>>sal;
}
void disp(){
    cout<<"\n eno="<<eno;
    cout<<"\n name="<<ename;
    cout<<"\n sal="<<sal;
    
}

}ob;


int main(){
char name[20];
int n,i;
cout<<"\n enter limit for rec..";
cin>>n;
emp ob[5];

for(i=0;i<n;i++){
    ob[i].accept();
}
cout<<"\n enter name for rec search...";
cin>>name;

for(i=0;i<n;i++){
if(strcmp(ob[i].ename,name)==0){
    break;
}
}

if(i==n){
    cout<<"\n rec not found...";
}
else{
    ob[i].disp();
    cout<<"\n rec found..";
}

}