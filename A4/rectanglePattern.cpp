#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout<<"Enter no of rows:";
    cin>>rows;

    cout<<"Enter no of col:";
    cin>>col;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            cout<<" * ";
        } cout<<endl;
    }

return 0;
}