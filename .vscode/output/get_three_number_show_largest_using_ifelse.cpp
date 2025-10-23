#include<iostream>
using namespace std ;
int main() {
    int a,b,c ;
    
    cout<<"enter your value :"<<endl;
    cin>>a>>b>>c ;
    if(a>b && a>c) {
        cout<<"max=a :"<<endl;
    }
    else if (b>a && b>c) {
        cout<<"max=b :"<<endl;
    }
    else if (c>a && c>b) {
        cout<<"max=c :"<<endl;
    }
    if(a<b && a<c){
         cout<<"min=a :"<<endl;

    }
   else if (b<a && b<c) {
    cout<<"min=b :"<<endl;
   }
   else if(c<a && c<b) {
    cout<<"min=c :"<<endl;
   }
   cout<<"maximum:"<<"max<<endl;
}
   return 0 ;