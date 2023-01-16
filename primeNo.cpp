#include<iostream>
using namespace std;

//Function to print prime no
bool prime(int a){
    for(int j=2;j<a;j++){
        if(a%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num1,num2;
    cout<<"Enter the no respectively:";
    cin>>num1>>num2;

    cout<<"Prime no from "<<num1<<" to "<<num2<<" are:";
    for(int i=num1;i<=num2;i++){
        if(i==1){
            continue;
        } else{
         if(prime(i)==1){
            cout<<i<<" ";
        }
        }
      
    }

return 0;
}