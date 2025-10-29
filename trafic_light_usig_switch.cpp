#include<iostream>
using namespace std ;
int main() {
    char r;
    cout<<"enter your character :"<<endl;
    cin>>r;

    switch(r) {
        case 'R' :
        cout<<"STOP "<<endl;
        break;

        case 'Y' :
        cout<<"READY"<<endl;
        break;

        case 'G' :
        cout<<"GO"<<endl;
        break;

        default:
        cout<<"invalid character:"<<endl;
    }
    return 0;
}