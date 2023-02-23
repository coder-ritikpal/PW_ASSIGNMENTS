#include<iostream>
using namespace std;
int main(){
    long long int no;
    cout<<"Enter the no:";
    cin>>no;
    long long int reverse=0;
    int remainder;


    if(no<10 and no>=0){
        cout<<"Reverse of no is:"<<no;
    } else if(no<0){ 
        while(no<0){
        cout<<"Enter positive no:";
        cin>>no;
        }
    } 

    if(no>=10)
      {
        while(no!=0){
            remainder=no%10;
            reverse=reverse*10+remainder;
            no/=10;
        }
        cout<<"Reverse of no is:"<<reverse;

    }

return 0;
}