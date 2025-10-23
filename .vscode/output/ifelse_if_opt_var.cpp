#include<iostream>
using namespace std ;
int main() {
    int n1,n2 ;
    char opt ;
    cout<<"enter your value :"<<endl;
    cin>>n1>>n2 ;
    cout<<"enter your operator :"<<endl;
    cin>>opt;
    if(opt== '+') {
        cout<<"sum ="<<n1+n2<<endl;
    }
    else if (opt== '-') {
        cout<<"sub ="<<n1-n2<<endl;
    }
    else if (opt== '*') {
        cout<<"mul ="<<n1*n2<<endl;
    }
    else if(opt== '/') {
        cout<<"div ="<<n1/n2<<endl;
    }
    else if (opt =='%') {
        cout<<"mod ="<<n1%n2<<endl;
    }
    else{
        cout<<"Invalid operator"<<endl;

    }
    return 0;
}