#include<iostream>
using namespace std;
int main() {

    int a;
    cout<<"enter your age :"<<endl;
    cin>>a;
    if(a>=18) {
        cout<<"applicable for casting vote  :"<<endl;
    }
    else{
        cout<<"not aplicbale for voting :"<<endl;
    }
    return 0 ;
}