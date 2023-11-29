#include<iostream>

using namespace std;

class number{
    private:
    int value;

    public:

    number(int val){
        value=val;
    }

    bool operator <(number &obj){
        return value<obj.value;
    }
    int print(){
        return value;
    }
};

int main(){
    number n1(19),n2(15);
        if(n1<n2){
            cout<<"n2 is greater "<<n2.print()<<endl;
        }
        else{
            cout<<"n1 is greater "<<n1.print()<<endl;
        }
    
    return 0;
}
// #include <iostream>

// class Number {
// private:
//     int value;

// public:
//     Number(int val) : value(val) {}

//     // Overloading the less than operator
//     bool operator<(const Number& other) const {
//         return value < other.value;
//     }

//     int getValue() const {
//         return value;
//     }
// };

// int main() {
//     Number num1(5);
//     Number num2(10);

//     if (num1 < num2) {
//         std::cout << "num1 (" << num1.getValue() << ") is less than num2 (" << num2.getValue() << ").\n";
//     } else {
//         std::cout << "num1 (" << num1.getValue() << ") is not less than num2 (" << num2.getValue() << ").\n";
//     }

//     return 0;
// }
