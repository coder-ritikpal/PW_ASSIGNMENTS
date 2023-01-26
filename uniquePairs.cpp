#include<iostream>
using namespace std;
//Function to count no of unique pairs of sum on (INDEX based).
int uniquePairs(int a[],int size,int x){
    int startp=0,endp=size-1;
    int count=0;

    while(startp<endp){
        if(a[startp]+a[endp]<x){
            startp++;
        } else if(a[startp]+a[endp]>x){
            endp--;
        } else {
            startp++;
            endp--;
            count++;
        } 
    } 

    return count;
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

    cout<<"Unique pairs is:"<<uniquePairs(arr,size,x);
   
    

return 0;
}