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
    int n,e1,i;
    cout<<"\n enter limit for recoder...";
    cin>>n;
emp ob[n];

for(i=0;i<n;i++){
    ob[i].accept();
}
    cout<<"\n enter eno for search...";
    cin>>e1;

    for(i=0;i<n;i++){
        if(ob[i].eno==e1){
            break;

        }
    }

if(i==n){
    cout<<"\n rec not found...";
}
else{
    ob[i].disp();
    cout<<"\n rec found...";
}


}