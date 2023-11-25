#include<iostream>
using namespace std;

template<typename t>

t add(t a,t b){
    return a+b;
};

int main(){

    int a;
    int b;
    a=12;
    b=45;
    int c=add(a,b);
    cout<<"the value of x is "<<c<<endl;
    return 0;
}