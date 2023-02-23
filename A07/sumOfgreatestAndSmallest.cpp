#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    
    int arr[size];
    cout<<"Enter element:";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int greatest=INT_MIN;
    int smallest=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        } else if(arr[i]>greatest){
            greatest=arr[i];
        }
    }

    int sumOf=greatest+smallest;
    cout<<"Sum of greatest and smallest in array= "<<sumOf;



return 0;
}