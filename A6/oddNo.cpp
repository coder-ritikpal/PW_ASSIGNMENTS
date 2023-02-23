#include<iostream>
using namespace std;

//Function to call odd no
void odd(int &a,int &b){
    for(int i=a;i<=b;i++){
        if(i%2==1){
            cout<<i<<" ";
        } else{
            cout<<"No odd present.";
        }
    }
    return;
}
int main(){
    int num1,num2;
    cout<<"Enter the no respectively:";
    cin>>num1>>num2;

    cout<<"Odd no from "<<num1<<" to "<<num2<<" are: ";
    odd(num1,num2);

return 0;
}