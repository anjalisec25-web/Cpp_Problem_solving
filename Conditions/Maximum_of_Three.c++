#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter NUmber 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
    cout<<"Enter Number 3:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is Greater.";
    }
    else if(b>c){
        cout<<b<<" is Greater.";
    }
    else{
        cout<<c<<" is Greater.";
    }
    return 0;
}