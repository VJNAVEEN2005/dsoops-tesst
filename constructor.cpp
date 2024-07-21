#include<iostream>
using namespace std;

class add{
    private:
        int a,b,c;
    public:
        add(){
            cout<<"Enter the number : ";
            cin>>a>>b>>c;
            cout<<"The Added Value is : "<<a+b+c;
        }
};

int main(){
    add a;
}