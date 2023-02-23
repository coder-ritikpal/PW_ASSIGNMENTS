#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size:";
    cin>>size;

    int alphabet=65;
    int num=0;
//upside Diamond
    for(int row=1;row<=size;row++){
        for(int space=1;space<=size-row;space++){
            cout<<" ";
        }
        for(int alpha=1;alpha<=2*row-1;alpha++){
            cout<<char(alphabet+num++);
        } 
        num=0;
        cout<<endl;
      } 
//Downside diamond
    for(int row=1;row<=size-1;row++){
        for(int space=1;space<=row;space++){
            cout<<" ";
        } 
        for(int alpha=1;alpha<=((size-row)*2-1);alpha++){
            cout<<char(alphabet+num++);
        }
        num=0;
        cout<<endl;
    }

return 0;
}