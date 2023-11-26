#include<iostream>

using namespace std;

template<class t>

class stack{
    private:
    t num;
    public:

    stack(t n){
        num=n;
    }

    t getnum(){
        return num;
    }
};

int main(){
    stack <int> s1(10);
    stack <double> s2(10.355);

    cout<<"value: "<<s1.getnum()<<endl;
    cout<<"value: "<<s2.getnum()<<endl;
cout<<"operation successful"<<endl;
    return 0;
}