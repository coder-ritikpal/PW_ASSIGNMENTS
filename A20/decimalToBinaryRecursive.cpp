#include<iostream>
using namespace std;
//Function to convert decimal to binary by recurssion
int binaryConversion(int n){
    if(n==0)  return 0;

    return (n%2)+binaryConversion(n/2)*10;
}
int main(){
    int d;
    cout<<"Enter decimal value:";   cin>>d;
    int binary=binaryConversion(d);

    cout<<"Binary conversion of "<<d<<" is:"<<binary;


return 0;
}