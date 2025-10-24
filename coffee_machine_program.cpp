#include<iostream>
using namespace std ;
int main () {
    int c;
    cout<<"ENTER YOUR CHOICE :"<<endl;
    cin>>c ;
    if(c==1) {
        cout<<"Espreeso :"<<endl;
}   
else if (c==2){
        cout<<"Cappuccino :"<<endl;
}   
else if (c==3) {
        cout<<"Latte :"<<endl;
}   
else if(c==4)  {
    cout<<"Black coffee :"<<endl;
}
else {
    cout<<"invalid choice :"<<endl;
}
return 0 ;

}