
#include<iostream>
using namespace std;
int main() { 
    int n1,n2;
    char opt;
    cout<<"enter 2 number :"<<endl;
    cin>>n1>>n2;
    cout<<"enter your operator:"<<endl;
    cin>>opt;

    switch(opt) {

        case '+' :
        cout<<"sum="<<n1+n2<<endl;
        break;

        case '-' :
        cout<<"sub="<<n1-n2<<endl;
        break;

        case '*' :
        cout<<"mul="<<n1*n2<<endl;
        break;

        case '/' :
        cout<<"div="<<n1/n2<<endl;
        break;

        case '%' :
        cout<<"mod="<<n1%n2<<endl;
        break;

        default:
        cout<<"INVALID OPERATOR:"<<endl;
    }
       return 0;

}
