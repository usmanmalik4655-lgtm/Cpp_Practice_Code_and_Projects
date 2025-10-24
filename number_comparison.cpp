#include<iostream>
using namespace std ;
int main () {
    int f,s ;
    cout<<"enter your value :"<<endl;
    cin>>f>>s;
    if(f>s) {
           cout<<"First is greater :"<<endl;
    }
    else{
        cout<<"second is greater :"<<endl;
    }
    if(f==s) {
        cout<<"equal :"<<endl ;
    }
    return 0;
}