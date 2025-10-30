#include<iostream>
using namespace std;
int main () {
    string USMAN ;
    cout<<"PLEASE ENTER YOUR NAME :"<<endl;
    cin>>USMAN;

    cout<<"THANKS SIR FOR COMING :"<<endl;
    cout<<"this program is for your financial health :"<<endl;

    float income;
    cout<<"enter your income of the month :"<<endl;
    cin>>income;
    int  f;
    cout<<"enter your food expenses :"<<endl;
    cin>>f;
    int t;
    cout<<"enter your transport espenses:"<<endl;
    cin>>t;
    int b; 
    cout<<"enter your bills expenses :"<<endl;
    cin>>b;
    int c;
    cout<<"enter your clothes expenses :"<<endl;
    cin>>c;
    int o;
    cout<<"enter your other expenses :"<<endl;
    cin>>o;
    float totalexpense = f+t+b+c+o;
    cout<<"TOTAL EXPENSES :"<<totalexpense<<endl;

    int budget = income - totalexpense;
    cout<<"BALANCE :"<<budget<<endl;
     
    if(totalexpense>income){
        cout<<"WARNING :"<<endl;
    }

   int l;
    cout<<"enter your budget limit :"<<endl;
   cin>>l;

    if(totalexpense>budget) {
        cout<<"BUDGET EXCEEDED!:"<<endl;
    }
    else {
        cout<<"with in limit:"<<endl;
    }

     int goal;
     cout<<"Enter your saving goal amount :"<<endl;
     cin>>goal;

     if(budget>=goal) {
        cout<<"saving goal achieved! :"<<endl;
     } 
    else {
        cout<<(budget/totalexpense)*100<<"percent is saved for your goal "<<endl;
     }
     int pm;
     cout<<"enter your payment method :"<<endl;
     cout<<"1.cash"<<endl;
     cout<<"2. DEBIT CARD :"<<endl;
     cout<<"3. JAZZ CASH :"<<endl;
     cout<<"4. EASY PAISA :"<<endl;
     cin>>pm;
     switch(pm) {
        case 1:
        cout<<"cash"<<endl;
        break;
        case 2:
        cout<<"DEBIT CARD"<<endl;
        break;
        case 3:
        cout<<"JAZZ CASH"<<endl;
        break;
        case 4 :
        cout<<"EASY PAISA"<<endl;
        break;

        default:
        cout<<"invalid payment method"<<endl;
        break;
     }
     if(income>50000 && totalexpense<30000) {
        cout<<"you have earned 100 reward points!"<<endl;

     }
     else if(income>30000) {
        cout<<"you have earned 50 points"<<endl;
     }
     else {
        cout<<"you have earned 10 points. keep saving!"<<endl;
     }
     cout<<"your income is "<<income<<endl;
     cout<<"your total expense :"<<totalexpense<<endl;
     cout<<"your balance :"<<budget<<endl;
     cout<<"your budget limit :"<<l<<endl;
     cout<<"saving goal :"<<goal<<endl;
     
     return 0;


    }