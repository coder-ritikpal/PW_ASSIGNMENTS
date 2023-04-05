#include<iostream>
#include<vector>
using namespace std;
//Function to find indices of target value.
void indices(int *a,int n,int i,int t,vector<int> &v){
    if(i==n)  return ;

    if(a[i]==t){
        v.push_back(i);
    }

    return indices(a,n,i+1,t,v);

}
int main(){
    int n;
    cout<<"Enter the size:";   cin>>n;
    int a[n];
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cout<<"Enter the target value:";    cin>>target;
    vector<int>v;

    indices(a,n,0,target,v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


return 0;
}