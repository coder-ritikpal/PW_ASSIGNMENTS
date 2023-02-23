#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int decimal;
    cout<<"Enter decimal no upto:";
    cin>>decimal;

    for(int i=1;i<=decimal;i++){
        sum+=i;
    }

    cout<<"Sum of "<<decimal<<" decimal no is:"<<sum<<endl;
    cout<<"Binary form of "<< sum<<" is:";

    int binaryForm=0;
    int power=1;
    while(sum>0){
        int parityDigit=sum%2;
        binaryForm+=power*parityDigit;
        power*=10;
        sum/=2;
    }

    cout<<binaryForm;

return 0;
}