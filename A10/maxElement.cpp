#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row:";   cin>>row;
    cout<<"Enter column:";  cin>>col;
    int arr[row][col];

    cout<<"Enter element:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    int maxElement=arr[0][0];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxElement){
                maxElement=arr[i][j];
            }
        }
    }

    cout<<"Max element is:"<<maxElement;



return 0;
}