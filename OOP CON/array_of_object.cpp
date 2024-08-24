#include<iostream>
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
    int n;
    cout<<"\n enter limit for recoder...";
    cin>>n;
emp ob[n];
for(int i=0;i<n;i++){
    ob[i].accept();
}
for(int i=0;i<n;i++){
    ob[i].disp();
}
}