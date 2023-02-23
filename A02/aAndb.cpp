#include<iostream>
using namespace std;
int main(){
 int a,b;
 bool condition;

 cout<<"Enter the value of a and b:";
 cin>>a>>b;

 if(a<50 and a<b){
    condition=true;
    cout<<"Condition met."<<endl<<"Output:"<<condition;
 } else{
    cout<<"Condition doesn't match."<<endl<<"Output:"<<condition;
 }

return 0;
}