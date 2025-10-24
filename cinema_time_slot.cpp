#include<iostream>
using namespace std ;
int main() {
    int su ;
    cout<<"enter your slot time :"<<endl;
    cin>>su;
    if(su>=8 && su<=11) {
        cout<<"Morning time :"<<endl;
    }
    else if(su>=12 && su<=16) {
        cout<<"Matinee show :"<<endl;
    }
    else if(su>=17 && su<=20) {
        cout<<"Evening show :"<<endl;
    }
    else if(su>=21 && su<=23) {
        cout<<"Night show :"<<endl;
    }
    else {
          cout<<"cinema closed :"<<endl;
    }
    return 0 ;
}