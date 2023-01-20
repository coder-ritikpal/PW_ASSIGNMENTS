#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int oddCount=0;
    int evenCount=0; 

    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
            evenCount++;
        } else{
            oddCount++;
        }
    }

    cout<<"Odd no present in array= "<<oddCount<<endl;
    cout<<"Even no present in array= "<<evenCount<<endl;

return 0;
}