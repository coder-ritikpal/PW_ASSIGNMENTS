#include<iostream>
using namespace std;
bool isPrime(int n,int i){
    if(n<=i){
        return (n==2)?true:false;
    }

    if(n%i==0)  return false;
     
    if(i*i>n)  return true;

    return isPrime(n,i+1);
}
int main(){
    int n;
    cout<<"Enter n:";   cin>>n;
    if(isPrime(n,2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

return 0;
}