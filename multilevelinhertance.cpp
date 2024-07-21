#include<iostream>
using namespace std;

class add{
    protected:
        int sum;
    public:
        void _sum(int a,int b){
            sum = a+b;
        }
};

class print : public add{
    public:
        void _print(){
            cout<<"The sum is : "<<sum;
        }
};

class display : public print{
    public:

};

int main(){
    display d;
    d._sum(90,95);
    d._print();
}