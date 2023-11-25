#include <iostream>

using namespace std;

class shape{
    public:

    virtual double calcarea()=0;
    virtual double calcperi()=0;
};

class square:public shape{
    private:
    double length;
    public:
    square(double l){
        length=l;
    }
    double calcarea(){
        return length*length;
}
double calcperi(){
    return 4*length;
}
};

int main(){
    shape *s1=new square(12.5);
    cout<<"Area of square is: "<<s1->calcarea()<<endl;
    cout<<"perimete of square is: "<<s1->calcperi()<<endl;
    return 0;
}
