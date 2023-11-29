#include<iostream>
#include<algorithm>
using namespace std;

class marks{
    private:
    int subjects[5];
    int sum=0;
    int average=0;

    public:

    marks(int s1,int s2,int s3,int s4,int s5){
        subjects[0]=s1;
        subjects[1]=s2;
        subjects[2]=s3;
        subjects[3]=s4;
        subjects[4]=s5;
    }
void print(){
    for(int i=0;i<5;i++){
        sum=sum+subjects[i];
    }
    cout<<"Sum of all the subject marks is : "<<sum<<endl;
    average=sum/5;
    cout<<"Average mark obtained in each subject is : "<<average<<endl;
}
friend void sorting(marks &student1);

    
};

void sorting(marks &s1){
    sort(s1.subjects,s1.subjects+5);
    for(int i=0;i<5;i++){
        cout<<s1.subjects[i]<<" ";
    }
    cout<<endl;
};

int main(){
   marks s1(90,78,98,97,96);
   sorting(s1);
   s1.print(); 
}

