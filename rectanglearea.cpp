#include<iostream>
using namespace std;

class side{
    protected:
        int l;
    public:
        side(){
            cout<<"Enter the side : ";
            cin>>l;
        }

        int operator * (side &obj){
            return (l)*(obj.l) ;
        }
};


int main(){
    side s1;
    side s2;

    int area = s1 * s2;
    cout<<"The Area is : "<<area;

}