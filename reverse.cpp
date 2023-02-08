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
    int *ptrReverse=&a[n-1];
    cout<<"Reverse of array is:";
    for(int i=0;i<n;i++){
        cout<<*ptrReverse<<" ";
        ptrReverse--;
    }

    return 0;
}