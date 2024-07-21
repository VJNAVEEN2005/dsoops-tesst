#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    vector<int> v;
    string name = "Hello World";
    int i;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int removed = v.back();
    v.pop_back();

    

    for(i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    cout<<"Removed : "<<removed;
    cout<<name;
}