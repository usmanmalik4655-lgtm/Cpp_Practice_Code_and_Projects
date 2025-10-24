#include<iostream>
using namespace std ;
int main() {
    int su;
    cout<<"ENTER YOUR SUGGESTION :"<<endl;
    cin>>su;
    if(su>=6 && su<=11) {
        cout<<"BREAKFAST MENU :"<<endl;
    }
    else if(su>=12 && su<=16) { 
        cout<<"LUNCH TIME :"<<endl;
    }
    else if(su>=17 && su<=22) {
        cout<<"DINNER TIME :"<<endl;
    }
    else {
        cout<<"REASTURANT CLOSED :"<<endl;
    }
    return 0;
}