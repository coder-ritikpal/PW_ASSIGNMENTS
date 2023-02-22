#include<iostream>
using namespace std;

void nPattern(int n,int m,bool flag){
    cout<<m<<" ";

    if(flag==false and m==n){
        return ;
    }

    if(flag){
        if((m-5)>0){
            nPattern(n,(m-5),true);
        } else{
            nPattern(n,(m-5),false);
        }
    } else{
        nPattern(n,(m+5),false);
    }

}
int main(){
    int n;
    cout<<"Enter n:";   cin>>n;
    int m=n;
    nPattern(n,m,true);


return 0;
}