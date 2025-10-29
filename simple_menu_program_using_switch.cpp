#include<iostream>
using namespace std;
int main() {
    int r;
    cout<<"enter your choice :"<<endl;
    cin>>r;

    switch(r) {
        case 1 :
        cout<<"TEA"<<endl;
        break;

        case 2 :
        cout<<"COFFEE"<<endl;
        break;

        case 3 :
        cout<<"JUICE"<<endl;
        break;

        case 4 :
        cout<<"EXIT"<<endl;
        break;

        default:
            cout<<"invalid choice"<<endl;
    }
    return 0;
}