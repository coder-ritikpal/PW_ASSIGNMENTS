#include<iostream>
using namespace std;
//Function to find sum of n natural no
int sumOf(int n){
    if(n==1){
        return 1;
    }
    return (n+sumOf(n-1));
}
//to find mth summation 
int summation(int n,int m){
    if(m==1){
        return sumOf(n);
    }
    int sum=summation(n,(m-1));

    return sumOf(sum);
}
int main(){
    int n,m;
    cout<<"Enter n:";       cin>>n;
    cout<<"Enter m:";       cin>>m;
    cout<<summation(n,m);


return 0;
}