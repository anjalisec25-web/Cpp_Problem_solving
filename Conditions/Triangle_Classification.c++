#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Angle 1:";
    cin>>a;
    cout<<"Enter Angle 2:";
    cin>>b;
    cout<<"Enter Angle 3:";
    cin>>c;
    if(a>0 && b>0 && c>0 && a+b+c==180){
        if(a<90 && b<90 && c<90){
            cout<<"Acute Angle Triangle.";
        }
        else if(a==90 || b==90 || c==90){
            cout<<"Right Angled Triangle.";
        }
        else if(a>90 || b>90 || c>90){
            cout<<"Obtuse Angled Triangle.";
        }
    }
    else{
        cout<<"Not a Triangle.";
    }
    return 0;
}