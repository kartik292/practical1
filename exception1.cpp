#include<iostream>

using namespace std;

class excep1{
    public:
    void hope(){
    cout<<"hurray"<<endl;
    }
};
class excep2{
    public:
    void hope1(){
    cout<<"wow"<<endl;
    }

};

int main(){
    int a=3;
try{
    if(a==1){
        throw excep1();
    }
    else{
        throw excep2();
    }
    }

    catch(excep1 e1){
        cout<<"handled th4 excel=pt "<<endl;
        e1.hope();
    }
    catch(excep2 e2){
        cout<<"hjandled"<<endl;
       e2.hope1();
    }
    return 0;
}