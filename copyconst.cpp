#include<iostream>
using namespace std;

class add{
    private:
        int a1,a2,a3;
    public:
        add(int a,int b,int c){
            a1=a;
            a2=b;
            a3=c;
            cout<<"\nConstructor : "<<a1+a2+a3;
        }
        add(add &obj1){
            a1=obj1.a1;
            a2=obj1.a2;
            a3=obj1.a3;
            cout<<"\nCopy Constructor : "<<a1+a2+a3;
        }
};

int main(){
    add obj1(90,95,95);
    add obj2=obj1;
}