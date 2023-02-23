#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the array size:";
    cin>>size;

    vector <int> arr(size);
    cout<<"Enter the element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    vector <int> squaresArr(size);
    int startp=0,endp=size-1,result=size-1;

    while(startp<=endp and result>=0){
        if(abs(arr[startp])>abs(arr[endp])){
            squaresArr[result]=arr[startp]*arr[startp];
            result--;
            startp++;
        }else{
            squaresArr[result]=arr[endp]*arr[endp];
            result--;
            endp--;
        }
    }

    cout<<"Squares of array =";
    for(int i=0;i<size;i++){
        cout<<squaresArr[i]<<" ";
    }
return 0;
}