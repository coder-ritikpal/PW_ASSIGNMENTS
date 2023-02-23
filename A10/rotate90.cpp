#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Function to rotate a square array by 90
void rotate(vector<vector<int>> &Square){
    int n=Square.size();
    //Transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(Square[i][j],Square[j][i]);
        }
    }

    //Reversing every row

    for(int i=0;i<n;i++){
        reverse(Square[i].begin(),Square[i].end());
    }

    return ;
}


int main(){
    int n;
    cout<<"Enter size:";    cin>>n;
    
    vector<vector<int>>Square(n, vector<int> (n));

    cout<<"Enter square arr element:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Square[i][j];
        }
    }

    rotate(Square);

    cout<<"After 90 degree rotation:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Square[i][j]<<" ";
        } cout<<endl;
    }
return 0;
}