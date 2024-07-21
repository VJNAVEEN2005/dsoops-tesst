#include<iostream>
using namespace std;

class student{
    string Name;
    public:
        void name();
        void display();
};

void student::name(){
    cout<<"Enter the Name : ";
    cin>>Name;
}
void student::display(){
    cout<<"Name : "<<Name;
}

int main(){
    student s;
    s.name();
    s.display();
}