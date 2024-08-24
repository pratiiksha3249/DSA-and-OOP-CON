#include<iostream>
using namespace std;
class emp{
    public:
   int eno;
   char ename[20];
   float sal;
   // construct also declare in publicly and def write outside the class
   emp();//construct declare 
   void disp(){
   cout<<"\n eno="<<eno;
   cout<<"\n ename="<<ename;
   cout<<"\n sal="<<sal;

   }
};


//constructor defination write outside the class

emp::emp(){
    cout<<"\n enter eno ename sal=";
    cin>>eno>>ename>>sal;
}

int main(){
emp ob;
ob.disp();

}