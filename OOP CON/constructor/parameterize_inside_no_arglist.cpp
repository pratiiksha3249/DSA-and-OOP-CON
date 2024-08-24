#include<iostream>
#include<string.h>
using namespace std;
class emp{
    public:
    int eno;
    char ename[20];
    float sal;
    
emp(int eno,char ename[20],float sal){
//local values assign to the global variables
this->eno=eno;
strcpy(this->ename,ename);
this->sal=sal;

}

void disp(){
    cout<<"\n eno="<<eno;
    cout<<"\n name="<<ename;
    cout<<"\n sal="<<sal;
    
}


};

int main(){
    int eno1;
    char ename1[20];
    float sal1;
    cout<<"\n ener eno1 ename1 sal1=";
    cin>>eno1>>ename1>>sal1;
    emp ob(eno1,ename1,sal1);
    ob.disp();

}