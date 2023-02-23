#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the 5 digit no:";
    cin>>x;
    
//Only for 5 digit number.
   int first = x/10000; 
    x = x%10000;
   int second = x/1000; 
    x = x%1000;
   int third = x/100; 
    x = x%100;
   int fourth = x/10; 
   int fifth = x%10;
    
    int sum=first+fourth;

    cout<<"Sum is:"<<sum;
return 0;
}