#include<iostream>
using namespace std;

class data{
    protected:
        int a,b;
    public:
        void getdata(){
            cout<<"\nEnter the value : ";
            cin>>a>>b;
        }
};

class add : public data{
    public:
        void sum(){
            getdata();
            cout<<"\nSum is : "<<a+b;
        }
};

class sub : public data{
    public:
        void diff(){
            getdata();
            cout<<"\nDiff is : "<<a-b;
        }
};

int main(){
    add a;
    sub s;
    a.sum();
    s.diff();
}