#include<iostream>
using namespace std ;
int main() {
    int c;
    cout<<"enter your number"<<endl;
    cin>>c;
    switch(c) {
        case 0 :
        cout<<"zero"<<endl;
        break;

        case 1 :
        cout<<"one"<<endl;
        break;

        case 2:
        cout<<"two"<<endl;
        break;

        case 3:
        cout<<"three"<<endl;
        break;

        case 4:
        cout<<"four"<<endl;
        break;

        case 5:
        cout<<"five"<<endl;
        break;

        case 6:
        cout<<"six"<<endl;
        break;

        case 7:
        cout<<"seven"<<endl;
        break;


         default:
         cout<<"invalid number :"<<endl;
    }
    return 0;
}