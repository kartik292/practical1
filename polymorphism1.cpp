#include<iostream>

using namespace std;

// class complex{
//     public:
//     int real,img;
//     complex( int r,int c){
//         real=r;
//         img=c;
//     }
//     complex operator+(complex const &obj){
//         complex res;
//         res.real=real+obj.real;
//         res.img=real+obj.img;
//         return res;

//         }
//         void print(){
//             cout<<"real: "<<real<<"+i "<<img<<endl;
//         }

// };
// int main()
// {
// complex c1(10,3),c2(12,3);
// complex c3;
// c3=c1+c2;
// c3.print();
// return 0;
// }

class number{
    private:
    int value;

    public:
    number(){
        value=0;
    }
    number(int r){
        value=r;
    }

    number operator+(number &obj){
        number result;
        result.value=value+obj.value;
        return result;
    }
    int print(){
        return value;
    }
};

int main(){
    number n1(5),n2(7);
    number sum=n1+n2;

    cout<<sum.print()<<endl;
}