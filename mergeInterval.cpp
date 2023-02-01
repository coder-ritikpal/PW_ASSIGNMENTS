#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& s) {

    vector<vector<int>> ans;
    int j=0;
    ans.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if(ans[j][1]>=s[i][0]){
            ans[j][1]=max(ans[j][1],s[i][1]);
        }else{
            j++;
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main(){
    int row;
    cout<<"Enter no of row:";   cin>>row;

    vector<vector<int>> interval(row, vector<int>(2));
    
    cout<<"Enter interval matrix:";
    for(int i=0;i<row;i++){
        for(int j=0;j<2;j++){
            cin>>interval[i][j];
        }
    }

    vector<vector<int>> ans=merge(interval);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}