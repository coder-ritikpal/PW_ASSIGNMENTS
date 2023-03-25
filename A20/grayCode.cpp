#include<iostream>
using namespace std;
//Function to find gray code from a given binary code.
int grayCode(int n){
    if(n==1 || n==0)    return n;

    return 10*(grayCode(n/10))+(n%10)^((n/10)%10);
}
int main(){
    int binaryCode;
    cout<<"Enter binary code:";     cin>>binaryCode;
    cout<<"Gray code is:"<<grayCode(binaryCode);

return 0;
}