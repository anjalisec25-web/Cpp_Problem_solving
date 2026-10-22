#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Number of Units:";
    cin>>x;
    if(x<0){
        cout<<"Invalid Unit.";
    }
    else if(x<=100){
        y=x*2;
        cout<<"Bill="<<y;
    }
    else if(x>100 && x<=200){
        y=(100*2)+((x-100)*3);
        cout<<"Bill="<<y;
    }
    else if(x>200 && x<=300){
        y=(100*2)+(100*3)+((x-200)*5);
        cout<<"Bill="<<y;
    }
    else{
        y=(100*2)+(100*3)+(100*5)+((x-300)*7);
        cout<<"Bill="<<y;
    }
    return 0;
}