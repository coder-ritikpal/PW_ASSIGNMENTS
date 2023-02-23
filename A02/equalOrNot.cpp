#include<iostream>
using namespace std;
int main(){

int num1,num2;
bool present;

cout<<"Enter num1 and num2:";
cin>>num1>>num2;

if(num1==num2){
    present=true;
    cout<<"The entered number are same."<<endl<<"Boolean value is:"<<present;
}else{
    present=false;
    cout<<"The entered number are different."<<endl<<"Boolean value is:"<<present;
}


return 0;
}
