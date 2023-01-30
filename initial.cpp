#include<iostream>
using namespace std;

//Function to find an updated array.
void updatedArray(int a[],int s,int &q,int &x){
    int ans[s];

    while(q--){
        int l,r;
        cout<<"Enter l and r respetively:";
        cin>>l;     cin>>r;
        for(int i=l;i<=r;i++){
            a[i]=a[i]+x;
        }
    }

    for(int i=0;i<s;i++){
        ans[i]=a[i];
    }

    cout<<"Updated array is:";
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }


    return ;
}
int main(){
    int s;
    cout<<"Enter size:";   cin>>s;


    int arr[s];
    for(int i=0;i<s;i++){
        arr[i]=0;
    }

    int q;
    cout<<"Enter how many times you want to updated an array:";    cin>>q;

    int x;
    cout<<"Enter value by how much you want to update:";      cin>>x;

    updatedArray(arr,s,q,x);

return 0;
}