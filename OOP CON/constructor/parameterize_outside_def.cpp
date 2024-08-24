#include<iostream>
#include<string.h>
using namespace std;
class emp{
public:

     int eno;
     char ename[50];
     float sal;
     //parameterize constructor only define 
     emp(int eno,char ename[50],float sal);

     void disp(){
        cout<<"\n emp eno="<<eno;
        cout<<"\n emp name="<<ename;
        cout<<"\n emp  sal="<<sal;
     }

};

emp::emp(int eno,char ename[50],float sal){
this->eno=eno;
strcmp(this->ename,ename);
this->sal=sal;

}

int main(){
    int eno1;
    char ename1[50];
    float sal1;

    cout<<"\n eno ename sal=";
    cin>>eno1>>ename1>>sal1;
    emp ob(eno1,ename1,sal1);
    ob.disp();
}