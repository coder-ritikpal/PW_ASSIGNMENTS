#include<iostream>
#include<vector>
using namespace std;
//Function to print r combination
void combination(int a[],int n,int r,int index,vector<int>c,int i){
    if(index==r){
        for(int j=0;j<r;j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
        return;
    }

    if(i>=n){
        return;
    }

    c[index]=a[i];

    combination(a,n,r,index+1,c,i+1);

    combination(a,n,r,index,c,i+1);
}

void printCombination(int a[],int n,int r){
    vector<int>c(r);

    combination(a,n,r,0,c,0);
}
int main(){
    int size;
    cout<<"Enter array size:";  cin>>size;
    int arr[size];

    cout<<"Enter array element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int r;
    cout<<"Enter r:";   cin>>r;

    printCombination(arr,size,r);


    return 0;
}