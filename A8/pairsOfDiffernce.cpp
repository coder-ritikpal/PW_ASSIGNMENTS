#include<iostream>
using namespace std;
//Function to check pairs of difference.
void sumPairs(int a[],int size,int x){
    bool pairs=0;
    int startp=0,endp=size-1;

    while(endp>startp){
        if(a[endp]-a[startp]<x){
            startp++;
        } else if(a[endp]-a[startp]>x){
            endp--;
        } else if(a[endp]-a[startp]==x){
            pairs=1;
            cout<<"Yes pairs are present.";

            return ;
        } 
    } 
    if(pairs==0){
        cout<<"No pairs found.";
    }

    return ;
}
int main(){
    int size;
    cout<<"Enter the array size:";
    cin>>size;

    int arr[size];
    cout<<"Enter the element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the integer x:";
    cin>>x;

    sumPairs(arr,size,x);
   
    

return 0;
}