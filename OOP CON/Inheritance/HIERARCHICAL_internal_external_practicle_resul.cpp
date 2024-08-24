#include<iostream>
using namespace std;
class college{
public: int cno;
           char cname[20],cadd[20];

            void acceptc(){
                cout<<"enter cno cname cadd";
                cin>>cno>>cname>>cadd;
            }


};

class teacher:public college{
public: int tno;
      char tname[20];
      float sal;

      void acceptt(){
        cout<<"enter tno tname sal:";
        cin>>tno>>tname>>sal;
      }

      void dispct(){
        cout<<"cno cname cadd:"<<cno<<cname<<cadd;
        cout<<"tno tname sal:"<<tno<<tname<<sal;

      }
};

class student:public college{
     public: int rno;
                char sname[20];
                float per;

                void accepcs(){
                    cout<<"enter rno sname per:";
                    cin>>rno>>sname>>per;
                }

                void dispcs(){
                    cout<<"cno cname cadd:"<<cno<<cname<<cadd;
                    cout<<"rno sname per:"<<rno<<sname<<per;

                }


};

int main()
{
student ob1;
teacher ob2;
ob1.acceptc();
cout<<"\n";
ob1.accepcs();
cout<<"\n";
ob1.dispcs();
cout<<"\n";

 ob2.acceptc();
 cout<<"\n";
ob2.acceptt();
cout<<"\n";
ob2.dispct();

return 0;
}