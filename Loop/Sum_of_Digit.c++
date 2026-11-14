#include <iostream>
using namespace std;
int main(){
    int n,sum=0,digit=0;
    cout<<"Enter a Number:";
    cin>>n;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout<<"Sum="<<sum;
    return 0;
}