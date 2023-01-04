#include<iostream>
using namespace std;
int main(){

int x,y,z;
cout<<"Enter value of x and y:";   
cin>>x>>y;

    z=x;
    x=y;
    y=z;

    cout<<"Value of x and y after swapping is:"<<x<<" and "<<y<<" respectively";

return 0;
}