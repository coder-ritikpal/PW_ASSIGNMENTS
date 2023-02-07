#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//Function to find max hourglass sum.
int maxHourglass(vector<vector<int>>m){
    int maxHourglassSum=INT_MIN;
    int r=m.size(),c=m[0].size();

    for(int i=0;i<r-2;i++){
        for(int j=0;j<c-2;j++){
            int sum;
            sum=(m[i][j]+m[i][j+1]+m[i][j+2])+m[i+1][j+1]+(m[i+2][j]+m[i+2][j+1]+m[i+2][j+2]);
            maxHourglassSum=max(maxHourglassSum,sum);
        }
    }

    return maxHourglassSum;
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

    cout<<"Max hourglass sum  is :"<<maxHourglass(m);

return 0;
}