#include<iostream>
#include<vector>
using namespace std;
//Function to print prefix matrix.
void prefixMatrix(vector<vector<int>>&m){
    int row=m.size(),col=m[0].size();

    vector<vector<int>>prefix(row,vector<int>(col));
    prefix[0][0]=m[0][0];
    //for 1st row.
    for(int i=1;i<row;i++){
        prefix[i][0]=prefix[i-1][0]+m[i][0];
    }
    //for 1st column.
    for(int j=1;j<col;j++){
        prefix[0][j]=prefix[0][j-1]+m[0][j];
    }

    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+m[i][j];
        }
    }

    //Printing prefix matrix
    cout<<"Prefix matrix is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<prefix[i][j]<<" ";
        } cout<<endl;
    }


    return ;
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

    prefixMatrix(m);


return 0;
}   