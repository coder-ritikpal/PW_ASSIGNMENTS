#include<iostream>
#include<vector>
using namespace std;

//Function to check if a matrix is perfect or not
bool perfectMatrix(vector<vector <int>>&v){
    int r=v.size(),c=v[0].size();
    bool p=0;

    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            if(v[i][j]==v[i+1][j+1]){
                p=1;
            } else{
                p=0;
            }   
        }
    }
    if(p==1){
        return 1;
    }

    return 0;
}
int main(){
    int row,col;
    cout<<"Enter row:";      cin>>row;
    cout<<"Enter column:";   cin>>col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout<<"Enter matrix element:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    perfectMatrix(matrix);
    if(perfectMatrix(matrix)==1){
        cout<<"True "<<"Matrix is perfect matrix.";
    } else{
        cout<<"False "<<"Matrix is not a perfect matrix.";
    }


return 0;
}
