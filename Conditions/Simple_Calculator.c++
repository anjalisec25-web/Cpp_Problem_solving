#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter Number 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
    cout<<"Enter a Operator(+,-,*,/):";
    cin>>op;
    if(op=='+'){
        cout<<a+b;
    }
    else if(op=='-'){
        cout<<a-b;
    }
    else if(op=='*'){
        cout<<a*b;
    }
    else if(op=='/'){
        cout<<a/b;
    }
    else{
        cout<<"Invalid Operator.";
    }
    return 0;
}