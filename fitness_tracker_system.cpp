#include<iostream>
using namespace std;
int main() {
    string name;
    cout<<"please enter your name :"<<endl;
    cin>>name;

    int age;
    cout<<"please enter your age :"<<endl;
    cin>>age;


     float height ;
     cout<<"ENTER YOUR HEIGHT IN CM:"<<endl;
     cin>>height;

     int weight ;
     cout<<"ENTER YOUR WEIGHT IN KG :"<<endl;
     cin>>weight;

     int rate ;
     cout<<"ENTER RESTING HEART RATE(beats per mintue)"<<endl;
     cin>>rate;

     

     int steps;
     cout<<"enter your steps walked :"<<endl;
     cin>>steps;

     int exercise;
     cout<<"enter your minutes of exercise :"<<endl;
     cin>>exercise;

     int sleep;
     cout<<"enter your hours of sleep:"<<endl;
     cin>>sleep;

    float BMI ;
     cout<<"BMI="<<weight/(height/100)*(height/100)<<endl;
    
     if(BMI<=18.5){
        cout<<"UNDERWEIGHT:"<<endl;
     }
     else if (BMI>18.5 && BMI<=25){
      cout<<"NORMAL :"<<endl;
     }
     else if(BMI>25 && BMI<=30) {
     cout<<"OVERWEIGHT :"<<endl;
     }
     else{
      cout<<"OBESE :"<<endl;
     }
     if(steps>=10000 && exercise>=30)
     cout<<"Excelent activity level :"<<endl;

     else if (steps>=5000|| exercise<=15) {
      cout<<"Good activity level!"<<endl;
     }
     else {
      cout<<"Try to be more active tomorrow :"<<endl;
     }
     if(sleep>=7) {
      cout<<"Good sleep duration :"<<endl;
     }
     else if (sleep>=5 && sleep<7) {
      cout<<"Moderate sleep- try to rest more"<<endl;
     }
     else {
      cout<<"Insuffcient sleep - priortize rest"<<endl;
     }
     int targetsteps ;
     cout<<"Enter your target of daily steps walked :"<<endl;
     cin>>targetsteps;
     
     int excercisemintue;
     cout<<"Enter your target of daily steps walked :"<<endl;
     cin>>excercisemintue;

     int sleephours;
     cout<<"Enter your daily targeted sleeo hours :"<<endl;
     cin>>sleephours;

     if(targetsteps==steps) {
      cout<<"Met goal :"<<endl;
     }
     else{
      cout<<"Did not met the goal :"<<endl;
     }
     if(excercisemintue==exercise) {
      cout<<"Met the goal :"<<endl;
     }
     else {
      cout<<"Did not met the goal :"<<endl;
     }
     if(sleephours==sleep){
      cout<<"met the goal :"<<endl;
     }
     else {
      cout<<"Did not met the goal :"<<endl;
     }
    int fe;
     cout<<"Enter your favourite exercise :"<<endl;
     cout<<"1. Running "<<endl;
     cout<<"2. Swimming "<<endl;
     cout<<"3. Cycling "<<endl;
     cout<<"4. Weight cycling "<<endl;
     cout<<"5. Yoga "<<endl;

     cin>>fe;
   switch(fe){
      case 1:
         cout<<"Running"<<endl;
         break;

         case 2:
         cout<<"Swimming"<<endl;
         break;

         case 3:
         cout<<"Cycling"<<endl;
         break;

         case 4:
         cout<<"Weight traning"<<endl;
         break;

         case 5:
         cout<<"Yoga"<<endl;
         break;

         default:
         cout<<"Invalid choice :"<<endl;
}    if(BMI==18.5 && exercise==4 ) {
        cout<<"Elite fitness level +50 points:"<<endl;
}
        else if(BMI==18.5 || exercise==30){
         cout<<"Good fitness level :"<<endl;
        }
        else{
         cout<<"Beginner leval! +10 points _keep going :"<<endl;
        }
   


         if(BMI==30 || rate==100 ){
        cout<<"Consider a consulting doctor:"<<endl;
     }
     else if (BMI==25 || rate==90){
      cout<<"Moniter your health regularly:"<<endl;
     }
     
     else{
      cout<<"Low health risk_Maintain your habits!:"<<endl;
     }              
      cout<<"your name is"<<name<<endl;
      cout<<"your age is"<<age<<endl;
     cout<<"your weight,height,Bmi:"<<weight<<height<<BMI<<endl;
     cout<<"your steps,excercise,sleep:"<<steps<<exercise<<sleep<<endl;
     cout<<"your goal achievement status :"<<targetsteps<<sleephours<<excercisemintue<<endl;
     cout<<"your favorite status :"<<endl; 
     cout<<"Fitness level points:"<<endl;

     return 0;
   
   }

   
    







                                                                                                                                                                                                       