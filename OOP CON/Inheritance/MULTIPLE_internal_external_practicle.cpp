#include<iostream>
using namespace std;
class internal{
    public:
    int m1[5];
    void accepin(){
        cout<<"enter 5 subject marks out of 30..";
        for(int i=0;i<5;i++){
             cin>>m1[i];
        }
    }
};

class external{
    public:
    int m2[5];
    void accepex(){
    cout<<"enter external marks out of 70..";
    for(int i=0;i<5;i++){
        cin>>m2[i];
    }
    }
};

class practicle{
public: int p;
        void acceptp(){
            cout<<"enter practicle marks out of 100..";
            cin>>p;
        }


};

class result:public internal,public external,public practicle{

public: int t;
        float p;

        void cal(){
            t=0;
            for(int i=0;i<5;i++){
                  t=t+m1[i]+m2[i];
            }

            p=(float)t/6;
        }
void disp(){
    cout<<"total :"<<t;
    cout<<"\n per :"<<p;
}

};

int main(){
result ob;
ob.accepin();
ob.accepex();
ob.acceptp();
ob.cal();
ob.disp();

    return 0;
}