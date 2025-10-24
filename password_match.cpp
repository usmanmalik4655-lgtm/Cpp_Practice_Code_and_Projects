#include<iostream>
using namespace std ;
int main() {
    int a,b;
    cout<<"enter your value :"<<endl;
    cin>>a>>b;
    if(a==b) {
        cout<<"access granted :"<<endl;      
    }
    else{
        cout<<"access denied :"<<endl;
    }
    return 0 ;
}