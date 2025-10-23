#include<iostream>
using namespace std ;
int main() {
    int su ;
    cout<<"enter your roll number :"<<endl;
    cin>>su;
    if(su>=1 && su<=100) {
        cout<<"KIPS COLLEGE CHAKWAL CAMPUS :"<<endl;
    }
    else if (su>=101 && su<=200) {
        cout<<"GOVT HIGH SCHOOL NO 1 :"<<endl;
    }
    else if(su>=201 && su<=300) {
        cout<<"FAUJI FOUNDATION COLLEGE CHAKWAL :"<<endl;
    }
    else if(su>300) {
        cout<<"GOVT HIGH SCHOOL TATRAL :"<<endl;
    }
    return 0 ;
}