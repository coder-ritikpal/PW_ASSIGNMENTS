#include<iostream>
using namespace std;

int main(){
 
  for( int i=100;i<500;i++){
    int sum=0,r;
    int x=i;
    while(x!=0)
    {   r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    } 
    if(sum==i)
    {   
      cout<<i<<"  ";
    }
    
  }
  
    return 0;

}