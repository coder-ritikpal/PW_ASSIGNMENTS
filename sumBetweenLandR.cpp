#include<iostream>
#include<vector>
using namespace std;

//Function to find prefixSum
void prefixSum(vector<int>&v){
    
    for(int i=0;i<v.size();i++){
        v[i]+=v[i-1];
    }

    return ;
}

int main(){
    int size;
    cout<<"Enter size:";   cin>>size;

    vector<int>v(size);
    cout<<"Enter the element:";
    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    prefixSum(v);

    int l,r;
    cout<<"Enter L and R respectively:";
    cin>>l>>r;

    int ans=0;
    ans=v[r]-v[l-1];

    cout<<"Sum between l and r is:"<<ans;

return 0;
}