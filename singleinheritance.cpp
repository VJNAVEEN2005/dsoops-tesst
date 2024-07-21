#include<iostream>
using namespace std;

class add{
    protected:
        int addition;
    public:
        void add1(int a,int b,int c){
            addition = a+b+c;
        }
};

class display : public add{
    public:
        void display1(){
            cout<<"Sum is : "<<addition;
        }
};

int main(){
    display d;
    d.add1(90,95,95);
    d.display1();
}