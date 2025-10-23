#include<iostream>
using namespace std ;
int main () {
    int su ;
    cout<<"enter your seat :"<<endl;
    cin>>su;
    if(su>=1 && su<=24) {
    cout<<"lower birth :"<<endl;
}
    else if(su>=25 && su<=48){
        cout<<"middle birth :"<<endl;
    }
    else if(su>=49 && su<=72) {
        cout<<"upper birth :"<<endl;
    }
    else {
        cout<<"invalid seat number :"<<endl;
    }
    return 0 ;
}
    