#include<iostream>

using namespace std;

class base{
    public:
    virtual void area(){
        cout<<"woof"<<endl;    }
};

class derieved:public base{
    public:

    void area(){
        cout<<"meow"<<endl;   }
    
};

int main(){
    
    base *b1;
    derieved d1;
    b1=&d1;
    b1->area();

}