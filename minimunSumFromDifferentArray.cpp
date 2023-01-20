#include<iostream>
#include<limits.h>
using namespace std;

int minimumSum(int a[],int b[],int n){
     int minA =INT_MAX , indexA;
    for (int i=0; i<n; i++)
    {
        if (a[i] < minA)
        {
            minA = a[i];
            indexA = i;
        }
    }
 
  
    int minB =INT_MAX , indexB;
    for (int i=0; i<n; i++)
    {
        if (b[i] < minB)
        {
            minB = b[i];
            indexB = i;
        }
    }
 
    if (indexA != indexB)
        return (minA + minB);
 
   
    int minA2 = INT_MAX, indexA2;
    for (int i=0; i<n; i++)
    {
        if (i != indexA && a[i] < minA2)
        {
            minA2 = a[i];
            indexA2 = i;
        }
    }
 
   
    int minB2 = INT_MAX, indexB2;
    for (int i=0; i<n; i++)
    {
        if (i != indexB && b[i] < minB2)
        {
            minB2 = b[i];
            indexB2 = i;
        }
    }
 
  
    return min(minB + minA2, minA + minB2);
}


int main(){
    int size;
    cout<<"Enter the length:";
    cin>>size;

    int a[size],b[size];

    cout<<"Enter element of a :";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"Enter element of b :";
    for(int i=0;i<size;i++){
        cin>>b[i];
    }
   
    cout<<"Minimum sum = "<<minimumSum(a,b,size);

return 0;
}