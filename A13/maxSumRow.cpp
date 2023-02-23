#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//Find to find row no with max sum element.
int maxSumRow(vector<vector<int>>a){
    int r=a.size(),c=a[0].size();

    for(int i=0;i<r;i++){
        for(int j=1;j<c;j++){
            a[i][j]+=a[i][j-1];
        }
    }

    int maxSum=INT_MIN;
    int row=0;

    for(int i=0;i<r;i++){
        int j=c-1;
        if(a[i][j]>maxSum){
            maxSum=a[i][j];
            row=i;
        }
    }
    row+=1;


     return row;
}
int main(){
    int r,c;
    cout<<"Enter row:";       cin>>r;
    cout<<"Enter column:";    cin>>c;

    vector<vector<int>> m(r,vector<int>(c));

    cout<<"Enter matrix element:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    } 

   cout<<"Row"<<maxSumRow(m)<<" has max sum of element.";   

return 0;
}