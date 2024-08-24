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
    int n,i,max=0,c=0;
    cout<<"\n enter limit for rec...";
    cin>>n;
    emp ob[6];

    for(i=0;i<n;i++){
        ob[i].accept();
    }
    
    for(i=0;i<n;i++){
        if(max<ob[i].sal){
           max=ob[i].sal;          
        }

    }


    for(int j=0;j<n;j++)
    {
        if(ob[j].sal==max){
            ob[j].disp();
        }
    }
}

