#include<iostream>
#include<vector>
using namespace std;
//Function to check matrix is a perfect square matrix or not.
bool checkSquareMatrix(vector<vector<int>>a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i or j==(n-i)-1){
                if(a[i][j]==0){
                    return  0;
                } 
            } else if(a[i][j]!=0){
                    return 0;                    
                }
        }
    }


    return 1;
}

int main(){
    int n;
    cout<<"Enter size:";     cin>>n;

    vector<vector<int>>s(n,vector<int>(n));

    cout<<"Enter square matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }

    cout<<checkSquareMatrix(s,n)<<endl;

    if(checkSquareMatrix(s,n)==1){
        cout<<"It's a perfect square matrix.";
    } else{
        cout<<"It's not a perfect square matrix.";
    }


return 0;
}