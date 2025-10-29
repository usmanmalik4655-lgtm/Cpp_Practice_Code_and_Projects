#include<iostream>
using namespace std ;
int main() {
    int num;
    cout<<"enter your number"<<endl;
    cin>>num;
    switch(num%2) {
        case 0 :
        cout<<"EVEN"<<endl;
        break;

        case 1 :
        cout<<"ODD"<<endl;
        break;

        default:
        cout<<"invalid number"<<endl;
    }
    return 0;
}