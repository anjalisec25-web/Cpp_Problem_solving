#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,sum=0,per=0;
    cout<<"Enter Mark 1:";
    cin>>a;
    cout<<"Enter Mark 2:";
    cin>>b;
    cout<<"Enter Mark 3:";
    cin>>c;
    cout<<"Enter Mark 4:";
    cin>>d;
    cout<<"Enter Mark 5:";
    cin>>e;
    sum=a+b+c+d+e;
    per=(sum*100)/500;
    if(per>=90){
        cout<<"Grade A";
    }
    else if(per>=75 && per<90){
        cout<<"Grade B";
    }
    else if(per<75){
        cout<<"Grade C";
    }
    return 0;
}