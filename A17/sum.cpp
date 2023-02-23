#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";   cin>>n;
    int a[n];
    int *ptr=a;
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        cin>>*ptr;
        ptr++;
    }

    ptr=a;
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    cout<<"Sum of element in array is:"<<sum;

return 0;
}