#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter natural no:";
    cin>>no;

    int zeroesCount=0;
    while(no>0){
        int parityDigit=no%2;
        if(parityDigit==0){
            zeroesCount++;
        }
        no/=2;
    }

    cout<<"No of 0's present is:"<<zeroesCount;

return 0;
}