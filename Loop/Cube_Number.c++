#include <iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"Enter Starting number:";
    cin>>a;
    cout<<"Enter Ending number:";
    cin>>b;
    for(i=a;i<=b;i++){
        cout<<i*i*i<<"\n";
    }
    return 0;
}