#include<iostream>
using namespace std;

//Eligibility checking for vote
void checkEligibility(int &n){
    if(n>=18){
        cout<<"Yes eligible for vote.";
    }else{
        cout<<"No not eligible for vote.";
    }

    return;
}
int main(){
    int age;
    cout<<"Enter the age:";
    cin>>age;

    checkEligibility(age);

return 0;
}