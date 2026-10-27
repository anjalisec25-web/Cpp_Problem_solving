#include <iostream>
using namespace std;
int main(){
    int num,count=0,digit,rem;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<"Enter a Digit:";
    cin>>digit;
    while(num>0){
        rem=num%10;
        if(rem==digit){
            count++;
        }
        num/=10;
    }
    cout<<"Frequency="<<count;
    return 0;
}