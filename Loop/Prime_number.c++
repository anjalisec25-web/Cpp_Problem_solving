#include <iostream>
using namespace std;
int main(){
    int n,i,flag=1;
    cout<<"Enter a Number:";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
        }
    }if(n<=1){
        cout<<"Not a Prime Number.";
    }
    else if(flag==1){
        cout<<"Prime Number.";
    }
    else{
        cout<<"Not a Prime Number.";
    }
    return 0;
}