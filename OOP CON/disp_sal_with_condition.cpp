#include<iostream>
using namespace std;
class emp{
public:
        int eno;
        char ename[20];
        float sal;

        void accept(){
            cout<<"\n enter eno ename sal...";
            cin>>eno>>ename>>sal;
        }

        void disp(){
            cout<<"\n eno="<<eno;
            cout<<"\n name="<<ename;
            cout<<"\n sal="<<sal;

        }


}ob;



int main(){
    int n,i;
    cout<<"\n enter limit for rec...";
    cin>>n;
    emp ob[6];

    for(i=0;i<n;i++){
        ob[i].accept();
    }
    for(i=0;i<n;i++){
        if(20000<ob[i].sal){
           
            ob[i].disp(); 
           
          
        }

    }
}