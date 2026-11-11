#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cout<<"Enter number of series:";
    cin>>n;
    if(n==0 || n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" ";
        cout<<b;
    }
    else{
        cout<<a<<" ";
        cout<<b<<" ";
        for(int i=2;i<=n;i++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    return 0;
}