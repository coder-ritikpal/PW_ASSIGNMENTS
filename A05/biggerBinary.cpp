#include<iostream>
using namespace std;
int main(){
    int binary1,binary2;
    cout<<"Enter binary1:";
    cin>>binary1;

    cout<<"Enter binary2:";
    cin>>binary2;

    int decimal1=0,decimal2=0;
    int power=1;

    while(binary1>0){
        int lastDigit=binary1%10;
        decimal1+=lastDigit*power;
        binary1/=10;
        power*=2;
    }
    power=1;
    while(binary2>0){
        int lastDigit=binary2%10;
        decimal2+=lastDigit*power;
        binary2/=10;
        power*=2;
    }

    if(decimal1>decimal2){
        cout<<"The greater no in decimal form is:"<<decimal1;
    } else{
        cout<<"The greater no in decimal form is:"<<decimal2;
    }

return 0;
}