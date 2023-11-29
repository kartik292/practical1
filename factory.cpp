#include<iostream>

using namespace std;

class animal{
    public:
    virtual void speak()=0;

    static animal *createanimal(int type);
};

class dog: public animal{
    public:
    void speak(){
        cout<<"Woof Woof"<<endl;
    }
};

class cat:public animal{
    public:

    void speak(){
        cout<<"Meow Meow"<<endl;
    }
};

animal *animal::createanimal(int type){
    if(type==1){
        return new dog();
    }
    else if (type==2){
        return new cat();
    }
    else{
        return nullptr;
    }
}

int main(){
    animal *dog1=animal::createanimal(2);
    dog1->speak();
    animal *cat1=animal::createanimal(3);
    cat1->speak();
    return 0;
}