#include<iostream>
using namespace std;
int main() {
    int su;
    cout<<"ENTER YOUR HOURS PARKED :"<<endl;
    cin>>su;
    if(su>=0 && su<=1) {
        cout<<"FREE :"<<endl;
    }
    else if(su>=2 && su<=4) {
        cout<<"RS 50 :"<<endl;
    }
    else if(su>=5 && su<=8) {
        cout<<"RS 100 :"<<endl;
    }
    else if (su>8) {
        cout<<"RS 200 :"<<endl;
    }
    return 0;
}