#include<iostream>
using namespace std;

class abc{
    public:
    void getspeak(){
        cout<<"hey"<<endl;
    }
};

class ab:public abc{
    public:
    void getnum(){
        cout<<1234567890<<endl;
    }
};

int main(){
    ab a;
    abc a1;
    a1.getspeak();
    a.getnum();
    a.getnum();
    return 0;
}