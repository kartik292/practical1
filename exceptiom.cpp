#include<iostream>
using namespace std;

int main(){
    double num,den,divide;

    cout<<"enter num: ";
    cin>>num;

    cout<<"enter den: ";
    cin>>den;

    try{
        if(den==0){
            throw 0;
        }
        divide = num/den;
        cout<<"after divide value is: "<<divide<<endl;


    }
    catch(int exception){
        cout<<"error value is "<<exception<<endl;
    }
}