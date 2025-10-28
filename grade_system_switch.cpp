#include<iostream>
using namespace std;
int main() {
    int c ;
    cout<<"enter your marks :"<<endl;
    cin>>c;

    switch(c/10) 
    {
        case  10:
        cout<<"GRADE A"<<endl;
        break;

        case  9:
        cout<<"GRADE B"<<endl;
        break;

        case  8:
        cout<<"GRADE C"<<endl;
        break;

        case  7:
        cout<<"GRADE D"<<endl;
        break;

        case  6:
        cout<<"GRADE E"<<endl;
        break;

        default:
        cout<<"better luck next time"<<endl;

    }
    return 0;
}