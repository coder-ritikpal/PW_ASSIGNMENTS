#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// To make row and column element be Zero if their is zero present in a row
void setZero(vector<vector<int>>&matrix){
     vector<vector<int>> answer;
     int n=matrix.size(),m=matrix[0].size();
    
    // Set all elements of answer array as 1
    for (int i = 0; i < n; i++) {
        vector<int> curr;
        for (int j = 0; j < m; j++) {
            curr.push_back(1);
        }
        answer.push_back(curr);
    }
        
    // Traverse row wise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    answer[i][k] = 0;
                }
                break;
            }
        }
    }
        
    // Traverse column wise
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    answer[k][j] = 0;
                }
            }
        }
    }
        
    // Update the elements in matrix array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (answer[i][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    int row,col;
    cout<<"Enter row:";      cin>>row;
    cout<<"Enter column:";   cin>>col;
    
    vector<vector<int>> v(row,vector<int> (col));

    cout<<"Enter element:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }

    setZero(v);

// printing after making Zero
    cout<<"Final matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }



    return 0;
}