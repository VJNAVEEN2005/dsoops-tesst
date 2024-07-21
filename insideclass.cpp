#include<iostream>
using namespace std;

class student{
    private:
        string Name;
    public:
        void name(string name){
            Name = name;
        }
        void display(){
            cout<<"\nName : "<<Name;
        }
};

int main(){
    student s;
    string name;
    cout<<"Enter the Name : ";
    cin>>name;
    s.name(name);
    s.display();
}