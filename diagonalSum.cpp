#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";   cin>>n;
    int a[n][n];
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=*(*(a+i)+i);
    }

    cout<<"Diagonal sum is:"<<sum;





    return 0;
}