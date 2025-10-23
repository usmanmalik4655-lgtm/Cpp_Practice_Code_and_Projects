#include<iostream>
using namespace std ;
int main() {
    int su ;
    cout<<"enter your suggestion :"<<endl;
    cin>>su ;
    if(su==1) {
        cout<<"petrol :"<<endl;      
    }
    else if(su==2){
        cout<<"petrol or hybrib :"<<endl;
    }
    else if (su==3){
        cout<<"disel :"<<endl;
    }
    return 0;
}