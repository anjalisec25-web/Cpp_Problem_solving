#include <iostream>
using namespace std;
int main(){
    int a,b,sum=0,i,term=0;
    cout<<"Enter Number:";
    cin>>a;
    cout<<"Enter Number of Series:";
    cin>>b;
    for(i=0;i<b;i++){
        term=term*10+a;
        sum+=term;
        cout<<term;
        if(i<a){
            cout<<" + ";
        }
    }
    cout<<endl;
    cout<<"Sum="<<sum;
    return 0;
}