#include<iostream>
#include<limits.h>
using namespace std;

int minf( int a[], int n){
    int min=INT_MAX;

    for(int j=0;j<n;j++){
        if(a[j]<min)
            min=a[j];
    }
    return min;
    }
    
int maxf(int a[],int n){
    int max=INT_MIN;

    for(int j=0;j<n;j++){
        if(a[j]>max)
            max=a[j];
    }
    return max;    
    }

int main(){
   int n;
   cout<<"Enter the value of n:";
   cin>>n;

   int a[n];

   cout<<"Enter the array element:";

   for(int &ele:a){
    cin>>ele;
   }

  
 cout<<"Min value is:"<<minf(a,n)<<endl;
 cout<<"Max value is:"<<maxf(a,n)<<endl;

int less,more;
less=minf(a,n);
more=maxf(a,n);

bool present=1;
cout<<"Missing no in range are:";
for(int y=less;y<=more;){
   for(int i=0;i<n;i++){
    if(a[i]!=y){
        present=0;
   } else{
    present=1;
    break;
   }
}  
 if(present==0){
    cout<<y<<" ";    
}
  y++;
}

return 0;
}