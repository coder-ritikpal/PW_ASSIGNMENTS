#include<iostream>
using namespace std;
//Function to find largest and smallest through pointer.
void largestAndSmallest(int *ptra, int *ptrb,int *ptrc){
    int smallest, largest;

    largest=max(*ptra,max(*ptrb,*ptrc));
    cout<<"Largest no is:"<<largest<<endl;

    smallest=min(*ptra,min(*ptrb,*ptrc));
    cout<<"Smallest no is:"<<smallest;

    return ;
}
int main(){
    int a,b,c;
    cout<<"Enter a:";    cin>>a;
    cout<<"Enter b:";    cin>>b;
    cout<<"Enter c:";    cin>>c;

    int *ptra=&a,*ptrb=&b,*ptrc=&c;
    largestAndSmallest(ptra,ptrb,ptrc);




return 0;
}