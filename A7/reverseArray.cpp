#include<iostream>
using namespace std;

void reverse(int arr[],int size){

    cout<<"Reverse of array is:";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return ;
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;

    int arr[size];
    cout<<"Enter element:";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    reverse(arr,size);

return 0;
}