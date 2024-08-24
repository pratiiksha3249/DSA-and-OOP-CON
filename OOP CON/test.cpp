#include<iostream>
using namespace std;
int n;

class person
{
public:
int id;
char name[20],nation[20];
void accept(){
cout<<"\n enter id..";
cin>>id;
cout<<"\n enter name..";
cin>>name;
cout<<"\n enter nation..";
cin>>nation;
}


void disp(int idd){
for(int i=0;i<n;i++){
if(ob[i].id==i){
    ob[i].disp();
    break;
}
}

}

void disp(){
    for(int i=0;i<n;i++){
        ob[i].disp();
    }
}

}ob[100];





void main(){
int n,idd;
person obj;
cout<<"\n ener limit...";
cin>>n;

for(int i=0;i<n;i++){
        ob[i].accept();
    }
cout<<"\n enter idd to search passposrt...";
cin>>idd;
cout<<endl;

obj.disp(idd);
cout<<endl;
obj.disp();

}