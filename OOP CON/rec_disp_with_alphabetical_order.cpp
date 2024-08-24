#include<iostream>
#include<string.h>
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
    int n,i,t=0;
    cout<<"\n enter limit for rec...";
    cin>>n;
    emp ob[6];

    for(int j=0;j<n;j++){
        ob[j].accept();
    }


          for(i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(strcmp(ob[i].ename,ob[j].ename)>0){
                   ob[j].disp();

         }
            }
}
}