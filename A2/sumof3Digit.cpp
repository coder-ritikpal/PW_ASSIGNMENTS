#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter  no:";
    cin>>no;

    int sum=0,remainder;

    while(no!=0){
        remainder=no%10;
        sum+=remainder;
        no=no/10;

    }
    cout<<"Sum of no is:"<<sum;
return 0;
}