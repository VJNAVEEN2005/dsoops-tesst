#include<iostream>
using namespace std;

class add{
    int addition;
    public:
        add(int a,int b){
            addition = a+b;
        }
        add(int a,int b,int c){
            addition = a+b+c;
        }

        void display(){
            cout<<"\nThe added value : "<<addition;
        }
};

int main(){
    add a1(5,5);
    add a2(5,5,5);

    a1.display();
    a2.display();

}