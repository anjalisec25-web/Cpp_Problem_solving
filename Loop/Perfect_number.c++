#include <iostream>
using namespace std;
int main(){
    int i,sum=0,j;
    for(i=1;i<=500;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(i==sum){
            cout<<i<<" ";
        }
    }
    return 0;
}