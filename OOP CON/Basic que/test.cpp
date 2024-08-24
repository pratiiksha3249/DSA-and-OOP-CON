#include<iostream>
using namespace std;
class Book{
public:
int price,cnt=0,copy;
char bname[20],pname[20],title[20];

void accept(){
    // for(int i=0;i<n;i++){
    cout<<"enter price bname pname title";
    cin>>price>>bname>>pname>>title;
    cnt++;
    // }
}
void sale(){
cout<<"no of how many copy would like to sold";
cin>>copy;
cout<<"\n total no of copy sold:"<<cnt-copy;

}
void purchase(){
cout<<"enter one book record to purchase price bname pname title";
cin>>price>>bname>>pname>>title;
cout<<"u purchase book is:"<<endl;
cout<<"price is :"<<price<<"book name:"<<bname<<"publisher name :"<<pname<<"title:"<<title;
}
};

int main(){
    int ch,n;
Book ob[20];
Book ob1;
do
{
cout<<"1-accept rec 2-sale rec 3-purchase rec enter choice....\n";
cin>>ch;
switch(ch){
case 1:
cout<<"enter limit for accept rec..";
cin>>n;
      for(int i=0;i<n;i++){
          ob[i].accept();
      }
      break;

case 2:ob1.sale();
break;
case 3:
}

}while(ch!=4);
}