#include<iostream>
using namespace std;

class student{

    private:
        string name;
        string id;
        int m1,m2,m3,mark1,mark2,mark3,avg,avg1;
    
    public:
        student(int m1,int m2,int m3){
            mark1 = m1;
            mark2 = m2;
            mark3 = m3;
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the id : ";
            cin>>id;
            avg=(mark1+mark2+mark3)/3;
        }

        student(student &s1){
            mark1 = s1.mark1;
            mark2 = s1.mark2;
            mark3 = s1.mark3;

            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the id : ";
            cin>>id;
            avg=(mark1+mark2+mark3)/3;
        }

        void display(){
            cout<<"Name : "<<name;
            cout<<"Id : "<<id;
            cout<<"Average mark : "<<avg;
        }

};

int main(){
    int m1,m2,m3;
    cout<<"Enter the marks : ";
    cin>>m1>>m2>>m3;
    student s1(m1,m2,m3);
    s1.display();
    student s2=s1;
    s2.display();
    return 0;
}