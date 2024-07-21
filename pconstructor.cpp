#include<iostream>
using namespace std;

class add{
    int a,b,c;
    public:
        add(int x,int y,int z){
            a=x;
            b=y;
            c=z;
            cout<<"The added Value is : "<<a+b+c;
        }
};

int main(){
    add a(5,5,5);
}