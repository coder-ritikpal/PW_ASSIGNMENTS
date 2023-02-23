#include<iostream>
using namespace std;

//function to find product of remaining element
void remainingProduct(int a[],int s){
    int ans[s];

    for(int i=0;i<s;i++){
        ans[i]=1;
        for(int j=0;j<s;j++){
            if(i==j){
                continue;
            }else{
                ans[i]*=a[j];
            }
           
        } 
    }

    cout<<"Remaining product array:";
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }

    return ;
}

int main(){
    int s;
    cout<<"Enter size:";    cin>>s;
    int arr[s];

    cout<<"Enter array element:";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }

    remainingProduct(arr,s);

return 0;
}