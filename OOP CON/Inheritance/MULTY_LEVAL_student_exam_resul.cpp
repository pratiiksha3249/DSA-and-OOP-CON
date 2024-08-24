#include<iostream>
using namespace std;

class student {
public:
    int rno;
    string sname, add;

    void accepts(){
        cout << "Enter rno, sname, add: ";
        cin >> rno >> sname >> add;
    }
};

class exam: public student {
public:
    int m[6];

    void acceptm(){
        cout << "Enter six subject marks: ";
        for(int i=0; i<6; i++){
            cin >> m[i];
        }
    }
};

class result: public exam {
public:
    int t = 0;
    float per;

    void cal(){
        for(int i=0; i<6; i++)
            t = t + m[i];
        
        per = static_cast<float>(t) / 6.0;
    }

    void disp(){
        cout << "Student no: " << rno;
        cout << "\nStudent name: " << sname;
        cout << "\nStudent total: " << t;
        cout << "\nStudent percentage: " << per;
    }
};

int main(){
    result obj;
    obj.accepts();
    obj.acceptm();
    obj.cal();
    obj.disp();
    return 0;
}