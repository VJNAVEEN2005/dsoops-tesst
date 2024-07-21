#include<iostream>
using namespace std;

class Class{
    public:
        int value;
        Class(int i){
            value = i;
        }
        void operator--(int){
            value--;
        }
        void operator++(int){
            value++;
        }
        void display(){
            cout<<"\nThe decremented value is : "<<value;
        }
};

int main(){
    Class c(10);
    c++;
    c++;
    c--;
    c.display();
}