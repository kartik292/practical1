#include<iostream>

using namespace std;

class base{
    public:
    virtual void show()=0;
};

class square:public base{
    public:
    void show(){
        cout<<"Square\n";
    }
};

class rectangle:public base{
    public:
    void show(){
        cout<<"rectangle"<<endl;
    }
};

int main(){
    square s1;
    rectangle r1;
    s1.show();
    r1.show();
}