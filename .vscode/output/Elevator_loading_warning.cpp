#include<iostream>
using namespace std ;
int main () {
    int su;
    cout<<"Input total weight of passengers :"<<endl;
    cin>>su;
    if(su<400) {
        cout<<"safe to operate :"<<endl;
    }
    else if(su>=400 && su<=600) {
        cout<<"warning near limit :"<<endl;
    }
    else if(su>=600) {
        cout<<"overload! reduce weight :"<<endl;
    }
    return 0;
}