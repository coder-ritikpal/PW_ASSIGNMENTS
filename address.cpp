#include<iostream>
using namespace std;
int main(){
    int n,m;
    int *ptrn=&n;
    int *ptrm=&m;

    cout<<"Address of integer m is:"<<ptrm<<endl;
    cout<<"Address of integer n is:"<<ptrn<<endl;

return 0;
}