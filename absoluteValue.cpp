#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a number"<<endl;
    cin>>r;
    if(r<0)  {
       r = r*(-1);
    }
    cout<<"Absolute value is "<<r<<endl;

return 0;
}