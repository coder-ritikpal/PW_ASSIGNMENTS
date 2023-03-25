#include<iostream>
using namespace std;
//Function to find product from recurssion.
int product(int x,int y){
    if(x<y){
        return product(y,x);
    }

    if(x==0 || y==0){
        return 0;
    } else{
        return product(x,y-1)+x;
    }

}
int main(){
    int x,y;
    cout<<"Enter x:";   cin>>x;
    cout<<"Enter y:";   cin>>y;
    int result=product(x,y);
    cout<<result;


return 0;
}