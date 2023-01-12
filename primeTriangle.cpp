#include<iostream>
using namespace std;
int main(){
int n,p=2;
cout<<"Enter no of line:";
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;){
    int y=2;
    while(y<p){
        if(p%y==0)
        break;
        y++;
    } if(y==p){
    cout<<p<<" ";
    j++;
   } p++;
   
   }
   cout<<endl; 
}
return 0;
}