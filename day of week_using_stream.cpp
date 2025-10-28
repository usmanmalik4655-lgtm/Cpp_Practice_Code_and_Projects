#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter your numbers :"<<endl;
    cin>>n;

   switch(n) {
    case 1 :
    cout<<"1= :"<<endl;
    break;

    case 2 :
    cout<<"TUESDAY :"<<endl;
    break;

    case 3 :
    cout<<"wednesday :"<<endl;
    break;

    case 4:
    cout<<"THURSDAY :"<<endl;
    break;

    case 5 :
    cout<<"FRIDAY :"<<endl;
    break;

    case 6 :
    cout<<"saturday :"<<endl;
    break;

    case 7 :
    cout<<"sunday :"<<endl;
    break;
    default:
    cout<<"invalid number:"<<endl;


    return 0;
   }
}