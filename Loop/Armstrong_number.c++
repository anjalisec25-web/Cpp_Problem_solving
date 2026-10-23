#include <iostream>
using namespace std;
int main(){
    int n,sum=0,temp,digit=0,rem,i,power;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
    while(temp>0){
        digit++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        rem=temp%10;
        power=1;
        for(i=1;i<=digit;i++){
            power=power*rem;
        }
        sum+=power;
        temp/=10;
    }
    if(n==sum){
        cout<<"Armstrong Number.";
    }
    else{
        cout<<"Not an Arstrong Number.";
    }
    return 0;
}