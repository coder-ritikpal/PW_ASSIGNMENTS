#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter size of arr1:";   cin>>m;
    int arr1[m];

    cout<<"Enter element of arr1 :";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    int n;
    cout<<"Enter the size of arr2:";   cin>>n;
    int arr2[n];

    cout<<"Enter element of arr2 :";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    int resultarr[m+n];
    int x=0,y=0;
    int z=0;

    while(x<m and y<n){
        if(arr1[x]<arr2[y]){
            resultarr[z]=arr1[x];
            x++;
            z++;
        } else{
            resultarr[z]=arr2[y];
            y++;
            z++;
        }
    }

    while(x<m){
        resultarr[z]=arr1[x];
        z++;
        x++;
    }

    while(y<n){
        resultarr[z]=arr2[y];
        z++;
        y++;
    }

    cout<<"Merged array is:";
    for(int i=0;i<(m+n);i++){
        cout<<resultarr[i]<<" ";
    }

    return 0;
}