#include<iostream>
using namespace std;

class add{
    int a,b,c,addition;
    public:
        add(){
            cout<<"Enter the value to be entered : ";
            cin>>a>>b>>c;
            addition=a+b+c;
        }
        ~add(){
            cout<<"The sum is : "<<addition;
        }
};

int main(){
    add a;
}