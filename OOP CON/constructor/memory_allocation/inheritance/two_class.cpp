#include<iostream>
using namespace std;
 int s=0;
 float p;

class student{
            public:
            int rno;
            char sname[20],add[20];

            student(){
  cout<<"\n enter rno sname add=";
  cin>>rno>>sname>>add;  
}
};

class marks:public student{
    public:
    int a[6];

    marks(){
    for(int i=0;i<6;i++){
              cin>>a[i];
    }
    for(int j=0;j<6;j++){
             s=s+a[j];
    }
    }

};


class result:public marks{
public:
result(){
p=s/6;

cout<<"rno="<<rno<<endl;
cout<<"sname="<<sname<<endl;

cout<<"total="<<s<<endl;
cout<<"per="<<p<<endl;

}

};

int main(){
result ob;
}