#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a Year:";
    cin>>year;
    if((year%4==0 && year%100!=0)||(year%400==0)){
        cout<<year<<" is Leap Year.";
    }
    else{
        cout<<year<<" is Not a Leap Year.";
    }
    return 0;
}