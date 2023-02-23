#include<iostream>
using namespace std;
int main(){
    int costPrice,sellingPrice;
    cout<<"Enter costprice:";
    cin>>costPrice;
    cout<<"Enter selling price:";
    cin>>sellingPrice;

    if(costPrice>sellingPrice){
        int loss=costPrice-sellingPrice;
        cout<<"Loss is:"<<loss;
    } else if(sellingPrice>costPrice){
        int profit=sellingPrice-costPrice;
        cout<<"Profit is:"<<profit;
    } else{
        cout<<"No loss No profit.";
    }
 
return 0;
}