#include<iostream>
using namespace std ;
int main() {
char ch;
    cout<<"enter your alphabat character :"<<endl;
    cin>>ch;
    switch(ch){
        case 'a' :
        case 'A' :
        cout<<"its vowel a "<<endl;
        break;

        case 'e' :
        case 'E' :
        cout<<"its vowel e"<<endl;
        break;

        case 'i' :
        case 'I' :
        cout<<"its vowel i"<<endl;
        break;

        case 'o' :
        case 'O' :
        cout<<"its vowel o"<<endl;
        break;

        case 'u' :
        case  'U' :
        cout<<"its vowel u"<<endl;
        break;

        default:
        cout<<"consonant"<<endl;
    }
    return 0;

}