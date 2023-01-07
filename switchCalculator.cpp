#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Enter num1 & num2 respectively:";
    cin>>num1>>num2;
     
     cout<<"Enter 1 for add OR 2 for subtract OR 3 for multiply OR 4 for division."<<endl;

    int operation;
    cout<<"Enter the operation no to perform:";
    cin>>operation;

    switch(operation){
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct";;
    }

return 0;
}