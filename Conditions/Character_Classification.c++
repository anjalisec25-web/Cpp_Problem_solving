# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"An Lowercase character.";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"An Uppercase character.";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"A digit.";
    }
    else {
        cout<<"Special character.";
    }
    return 0;
}