# include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number 1:";
    cin>>n;
    cout<<"Enter number 2:";
    cin>>m;
    if(n>m){
        cout<<n<<" is Greater";
    }
    else if(n<m){
        cout<<m<<" is Greater";
    }
    else{
        cout<<"Both numbers are Equal";
    }
    return 0;
}