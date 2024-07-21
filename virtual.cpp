#include<iostream>
using namespace std;

class add{
    public:
        float a,b,c;
        virtual void area(){
            cout<<"Enter the area : ";
            cin>>a>>b;
            cout<<"Area of square : ";
            cout<<a*b;
        }
};

class triangle : public add{
    public:
        void area(){
            cout<<"\nEnter the area : ";
            cin>>a>>b;
            cout<<"Area of triangle : ";
            cout<<((float)1/2)*a*b;
        }
};

int main(){
    add *a;
    triangle t;
    a = &t;
    a->area();
    (*a).area();
}