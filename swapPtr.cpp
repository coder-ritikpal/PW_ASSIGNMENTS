#include<iostream>
using namespace std;
//Function to swap no using pointer.
void swap(int *a,int *b){
    int swap=*a;
    *a=*b;
    *b=swap;

    return;

}
int main(){
    int a,b;
    cout<<"Enter a:";     cin>>a;
    cout<<"Enter b:";     cin>>b;

    swap(a,b);

    cout<<"After swapping a and b are:"<<a<<" and "<<b<<endl;

return 0;
}