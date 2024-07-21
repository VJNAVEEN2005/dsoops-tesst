#include<iostream>
using namespace std;

void add(int a,int b,int c){
    int sum = a+b+c;
    cout<<"\nSum : "<<sum;
}

void add(int a,int b){
    int sum = a+b;
    cout<<"\nSum : "<<sum;
}

int main(){
    add(5,5);
    add(5,5,5);
}