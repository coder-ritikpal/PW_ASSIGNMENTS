#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int N;
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
             a = a + i + j;
        }
    }

return 0;
}

//Time Complexity=O(N*N).