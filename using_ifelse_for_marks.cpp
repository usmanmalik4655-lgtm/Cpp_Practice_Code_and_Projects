#include<iostream>
using namespace std ;
int main () {
    int m;
    cout<<"enter your marks :"<<endl;
    cin>> m ;
    if(m>=90) {
        cout<<"grade A+:"<<endl;
    }
    else if (m>=80 && m>=89){
        cout<<"grade A :"<<endl ;
    }
    else if (m>=70 && m>=79) {
        cout<<"grade B :"<<endl ;
    }
    else if(m>=60 &&m>=69){
        cout<<"grade C :"<<endl;
    }
    else if (m>=50 && m>=59){
        cout<<"grade E :"<<endl;
    }
    else{
        cout<<"better luck next time :"<<endl;
    }
    return 0 ;

}