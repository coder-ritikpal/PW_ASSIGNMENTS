#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter the no:";
    cin>>no;

    while(no%2==0){
        cout<<"Enter odd no to get correct pattern.";
        cin>>no;
    }

    for(int row=1;row<=no;row++){
        for(int column=1;column<=no;column++){
            if(row==column || row+column==(no+1)){
                cout<<"*";
            } else{
                cout<<" ";
            }
        } cout<<endl;
    }
}