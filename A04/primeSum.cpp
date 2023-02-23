#include<iostream>
using namespace std;

bool isPrime(int n){
    bool prime=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
        return prime;
}
int main(){
    int num;
    cout<<"Enter any no:";
    cin>>num;

    for(int i=2;i<=num/2;i++){
        if(isPrime(i)==1){
            if(isPrime(num-i)==1){
               cout<<num<<"= "<<i<<" + "<<num-i<<endl;
            }
        } 
    } 

return 0;
}