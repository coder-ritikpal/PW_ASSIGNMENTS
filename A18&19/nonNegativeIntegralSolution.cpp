#include<iostream>
using namespace std;

int countSolutions(int n, int val){
    int total = 0;

    if (n == 1 && val >=0)
        return 1;

    for (int i = 0; i <= val; i++){
        total += countSolutions(n-1, val-i);        
    }
     
        return total;
}
 
int main(){
     
    int n,val;
    cout<<"Enter n:";       cin>>n;
    cout<<"Enter val:";     cin>>val;
     
    cout<<countSolutions(n, val);
}