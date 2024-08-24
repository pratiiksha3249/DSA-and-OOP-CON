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
    int n,i,t=0;
    cout<<"\n enter limit for rec...";
    cin>>n;
    emp ob[6];

    for(int j=0;j<n;j++){
        ob[j].accept();
    }


          for(i=1;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(ob[j].sal>ob[j+1].sal){
              emp t=ob[j];
              ob[j]=ob[j+1];
               ob[j+1]=t;
              
                
                }
            }
            
            
          }

for(int p=0;p<n;p++){
                ob[p].disp();
            }

}