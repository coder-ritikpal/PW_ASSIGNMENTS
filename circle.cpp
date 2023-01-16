#include<iostream>
using namespace std;

//Function to find circumference
void circumference(int &n){
    float circum=2*3.14*n;
    cout<<"Circumference of circle is:"<<circum<<endl;

    return ;
}

//Function to find area of circle
void area(int &n){
    float area=3.14*n*n;
    cout<<"Area of circle is:"<<area<<endl;

    return ;
}

int main(){
    int radius;
    cout<<"Enter the radius of a circle:";
    cin>>radius;

   circumference(radius);
   area(radius);

return 0;
}