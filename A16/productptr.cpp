#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a:";         cin>>a;
    cout<<"Enter b:";         cin>>b;

    int *ptra=&a,*ptrb=&b;
    int product=(*ptra)*(*ptrb);
    int *ptrProduct=&product;
    cout<<"Product of a and b is:"<<*ptrProduct;

return 0;
}