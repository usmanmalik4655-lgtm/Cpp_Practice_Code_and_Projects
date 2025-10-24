#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter your value:"<<endl;
    cin>>a;
    if(a>=18){
        cout<<"adult :"<<endl;
    }
    else{
        cout<<"minor :"<<endl;
    }
    return 0;
}