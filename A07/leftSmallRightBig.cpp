#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int a[size];
    
    cout<<"Enter array element: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    bool condition;
    for(int i=1;i<size-1;i++){
        if(size%2==0){
            cout<<-1;
            return 0;
        }else{
        int left=i-1;
        while(left>=0){
            if(a[left]<a[i]){
                condition=1;
                left--;
            } else{
                condition=0;
                break;
            }
        }

        int right=i+1;
        while(right<size-1){
            if(a[right]>a[i]){
                condition=1;
                right++;
            } else{
                condition=0;
                break;
            }
        }

        if(condition==1 and (a[i]==a[size/2])) {
            cout<<a[i];
            return 0;  
        }
    }
        }
      

return 0;
}