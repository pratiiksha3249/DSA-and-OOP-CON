#include<iostream>
using namespace std;
class emp {
    public:
    int eno;
    char ename[20];
    float sal;
//default constructor also constructor name and class name must be same
emp(){
    cout<<"enter eno ename sal=";
    cin>>eno>>ename>>sal;

}
 void disp(){
    cout<<"emp eno="<<eno;
    cout<<"\nemp ename="<<ename;
    cout<<"\nemp sal="<<sal;
}


};
int main(){
    //when object is create then autometicly call to then constructor
    emp ob;
    ob.disp();
}