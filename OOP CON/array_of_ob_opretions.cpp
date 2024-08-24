#include<iostream>
using namespace std;
#include<string.h>

int n;
class college{
public:

int cid,year;
char cname[20],uname[20];

void accept(){
    cout<<"\n enter college id,year,cname,uname...";
    cin>>cname>>uname>>year;
}
void display(char uname1[20]){
    int i;
for( i=0;i<n;i++){
      if(strcmp(ob[i].uname,uname1)==0){
      
       cout<<"\n college id.."<<cid;
       cout<<"\n college name.."<<cname;
       cout<<"\n college unuvercity name.."<<uname;
       cout<<"\n college year.."<<year;

      }
}
}

// void display(int year1){
// for(int i=0;i<n;i++){
//     if(ob[i].year==year1){
      
//        cout<<"\n college id.."<<cid;
//        cout<<"\n college name.."<<cname;
//        cout<<"\n college unuvercity name.."<<uname;
//        cout<<"\n college year.."<<year;  
//     }
// }
// }
};


int main(){
    college obj;
int n,ch,year1;
char uname1[20];
cout<<"\n enter limit...";
cin>>n;
college ob[100];

for(int i=0;i<n;i++){
    ob[i].accept();
}

do{
 cout<<"\n 1-display univ wise\n 2-display year wise..\n";
 cin>>ch;
 switch(ch){
case 1: 
                cout<<"\n enter univercity name...";
                cin>>uname1;
                obj.display(uname1);
                break;

// case 2:
//                 cout<<"\n enter year ...";
//                 cin>>year1;
//                 obj.display(year1);
//                 break;




 }

}while(ch<3);

}