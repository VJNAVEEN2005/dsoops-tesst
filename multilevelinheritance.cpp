#include<iostream>
using namespace std;

class add{
    protected:
        int sum,a,b;
    public:
        add(){
            cout<<"Enter the value : ";
            cin>>a>>b;
            sum = a+b;
        }
};

class sub{
    protected:
        int diff,a,b;
    public:
        sub(){
            cout<<"Enter the value : ";
            cin>>a>>b;
            diff = a-b;
        }
};

class display : public add,public sub{
    public:
        display(){
        cout<<"Sum is : "<<sum;
        cout<<"Diff is : "<<diff;
        }
};

int main(){
    display d;
}