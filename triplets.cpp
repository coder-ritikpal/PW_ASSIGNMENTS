#include<iostream>
#include<vector>
using namespace std;

//Function to count no of unique triplets.
int triplets(vector<int>&nums,int x){
    int count=0;
    int n=nums.size()-1;

    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n;
        while(j<k){
            if(nums[i]+nums[j]==x-nums[k]){
                count++;
                k--;
            }else{
                k--;
            }
        }
    }

    return count;
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    vector <int> nums(size);

    cout<<"Enter element:";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }

    int x;
    cout<<"Enter integer:";
    cin>>x;

    cout<<"Triplets count is:"<<triplets(nums,x);

    return 0;
}