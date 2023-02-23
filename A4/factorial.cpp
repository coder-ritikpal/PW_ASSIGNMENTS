#include<iostream>
using namespace std;
int main(){
int n;

cout<<"Enter the no:";
cin>>n;
 int factorial=n;

for( int j=n-1;j>=1;j--)
{   
    factorial=factorial*j;
   
    }
    
    cout<<"The factorial of "<<n<<" is:"<<factorial;

return 0;

}
