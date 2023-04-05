#include<iostream>
using namespace std;
//Function to print triangle sum of an array
void triangleSum(int arr[],int n){
    if(n==0){
        return;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    cout<<endl;
    int sum[n-1];

   for(int i=0;i<n-1;i++){
    int tSum=arr[i]+arr[i+1];
    sum[i]=tSum;
    }
    
    triangleSum(sum,n-1);
}
int main(){
    int size;
    cout<<"Enter array size:";  cin>>size;
    int arr[size];
    cout<<"Enter array element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    triangleSum(arr,size);


    return 0;
}