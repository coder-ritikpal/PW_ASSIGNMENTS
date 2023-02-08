#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"Enter size:";     cin>>s;
    int arr[s];
    cout<<"Enter array element:";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k:";   cin>>k;

    int *ptrk=(arr+k-1);

    cout<<k << "th element of an array is:"<<*ptrk;
    

return 0;
}