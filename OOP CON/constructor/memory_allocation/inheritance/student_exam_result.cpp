#include<iostream>
using namespace std;
 int s=0;
float p;

class student{
public:
int rno;
char sname[20],add[20];

void accept(){
  cout<<"\n enter rno sname add=";
  cin>>rno>>sname>>add;  
}

};

class exam: public student{
public:
int a[6];

void marks(){
cout<<"enter 6 subject marks..";
for(int i=0;i<6;i++){
     cin>>a[i];

}
// for(int j=0;j<6;j++){
   
//     s=s+a[j]; 
     
// }

 }

};
// class result:public exam{
// void cal(){
//     p=s/6;
// }
// void disp(){
// cout<<"rno="<<rno<<endl;
// cout<<"sname="<<sname<<endl;

// cout<<"total="<<s<<endl;
// cout<<"per="<<p<<endl;

// }
// };


int main(){
exam ob;
// ob.disp();
}