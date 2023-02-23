#include<iostream>
using namespace std;

int oddSubarray(int a[],int s){
    int oddCount=0;

    for(int i=0;i<s;i++){
        if(a[i]%2!=0){
            oddCount++;
        }
        int oddSum=a[i];
        for(int j=i+1;j<s;j++){
            oddSum+=a[j];
            if(oddSum%2!=0){
                oddCount++;
            }
        }
    }

    return oddCount;
}
int main(){
    int s;
    cout<<"Enter size:";  cin>>s;
    int arr[s];

    cout<<"Enter array element:";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    cout<<"Count of subarray with odd sum is:"<<oddSubarray(arr,s);

return 0;
}