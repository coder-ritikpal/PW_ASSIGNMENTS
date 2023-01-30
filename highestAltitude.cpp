#include<iostream>
#include<vector>
using namespace std;
//function calculating highestAltitude.
int highestAltitude(vector<int>& netHeight){
    int initial=0;
    int highest=0;

    for(int i=1;i<netHeight.size();i++){
        highest+=netHeight[i-1];

        highest=max(initial,highest);
    }


    return highest;
}
int main(){
    int n;
    cout<<"Enter n:";  cin>>n;

    vector<int>netHeight(n);
    cout<<"Enter the height array:";
    for(int i=0;i<n;i++){
        cin>>netHeight[i];
    }

    cout<<"Highest altitude is:"<<highestAltitude(netHeight);



return 0;
}