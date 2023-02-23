#include<iostream>
using namespace std;

//Function to find a squares
void squares(int &n){
    int square=n*n;

    cout<<square<<" ";

    return ;
}

int main(){
    int num1,num2;
    cout<<"Enter num1 and num2 respectively:";
    cin>>num1>>num2;

    cout<<"Squares from "<<num1<<" to "<<num2<<" are:";
    for(int i=num1;i<=num2;i++){
       squares(i);
    }



return 0;
}