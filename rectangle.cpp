#include<iostream>
using namespace std;

class rectangle{
    public:
        int l,b,area;
        rectangle(int a1,int b1){
            l = a1;
            b = b1;
            area = l*b;
        }

        int operator < (rectangle &r){
            return (area)<(r.b*r.l);
        }

        int operator > (rectangle &r){
            return (area)>(r.b*r.l);
        }
};

int main(){
    rectangle r1(5,5);
    rectangle r2(5,5);

    if(r1<r2){
        printf("r2 is large");
    }
    else if(r1>r2){
        printf("r1 is large");
    }
    else{
        printf("r1 is equale to r2");
    }
}