#include<iostream>
#include<vector>
using namespace std;
//Function to print upper half of a square matrix
void upper(vector<vector<int>>a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<a[i][j]<<" ";
            } else{
                cout<<"  ";
            }
        } cout<<endl;
    }


    return ;
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

    upper(s);


return 0;
}