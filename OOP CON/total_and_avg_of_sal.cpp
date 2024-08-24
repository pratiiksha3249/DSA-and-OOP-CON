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
    int n,total=0,i;
    cout<<"\n enter limit for recoder...";
    cin>>n;
emp ob[n];

for(i=0;i<n;i++){
    ob[i].accept();
}
for(int j=0;j<n;j++){
    total=total+ob[j].sal;
}
float avg=total/n;

cout<<"\n total of all emp salary...."<<total;
cout<<"\n avg of all emp salary...."<<avg;



}