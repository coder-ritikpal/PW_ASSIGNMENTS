#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;

    while(n<0){
        cout<<"The number is negative and skiped."<<endl;
        cout<<"Enter another one:";
        cin>>n;
    }

    cout<<"This is the positive number.";

return 0;
}