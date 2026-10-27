#include <iostream>
using namespace std;
int main(){
    int num,rev=0,digit,temp;
    cout<<"Enter a number:";
    cin>>num;
    temp=num;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    cout<<"Reverse="<<rev;
    return 0;
}