#include <iostream>
using namespace std;
int main(){
    char al;
    cout<<"Enter an Alphabet:";
    cin>>al;
    if(al=='a' || al=='e' || al=='i' || al=='o' || al=='u' 
    || al=='A' || al=='E' || al=='I' || al=='O' || al=='U'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}