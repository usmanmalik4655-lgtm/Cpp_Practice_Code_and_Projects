#include<iostream>
using namespace std ;
int main() {
    int su ;
    cout<<"enter your battery percentage :"<<endl;
    cin>>su;
    if(su<10) {
        cout<<"CHARGE NOW! :"<<endl;
    }
    else if (su>=10 && su<=30) {
        cout<<"LOW  BATTERY :"<<endl;
    }
    else if (su>=31 && su<=80) {
        cout<<"NORMAL BATTERY :"<<endl;
    }
    else if (su>80) {
        cout<<"FULL BATTERY :"<<endl;
    }
    return 0 ;
}