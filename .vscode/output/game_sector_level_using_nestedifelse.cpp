#include<iostream>
using namespace std ;
int main() {
    int su;
    cout<<"enter your level :"<<endl;
    cin>>su;
    if(su>=0 && su<=100) {
        cout<<"BEGINNER :"<<endl;
    }
    else if(su>=101 && su<=500){
        cout<<"INTERMEDIATE :"<<endl;
    }
    else if(su>=501 && su<=1000) {
        cout<<"EXPERT :"<<endl;
    }
    else {
     cout<<"LEGEND :"<<endl;
    }
    return 0;
}