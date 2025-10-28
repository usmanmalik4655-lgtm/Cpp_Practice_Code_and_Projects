#include<iostream>
using namespace std ;
int main() {
    int m;
    cout<<"enter your number :"<<endl;
    cin>>m;

    switch(m) {
        case 1 :
        cout<<"JAN= :"<<1<<endl;
        break;

        case 2 :
        cout<<"feb =:"<<2<<endl;
        break;

        case 3 :
        cout<<"mar=:"<<3<<endl;
        break;

        case 4 :
        cout<<"april=:"<<4<<endl;
        break;

        case 5 :
        cout<<"may=:"<<5<<endl;
        break;

        case 6 :
        cout<<"jun=:"<<6<<endl;
        break;

        case 7 :
        cout<<"july=:"<<7<<endl;
        break;

        case 8 :
        cout<<"aug=:"<<8<<endl;
        break;

        case 9 :
        cout<<"oct=:"<<9<<endl;
        break;

        case 10 :
        cout<<"sep=:"<<10<<endl;
        break;

        case 11 :
        cout<<"nov=:"<<11<<endl;
        break;

        case 12 :
        cout<<"dec=:"<<12<<endl;

        default:
        cout<<"invalid number :"<<endl;

        return 0;
    }
}