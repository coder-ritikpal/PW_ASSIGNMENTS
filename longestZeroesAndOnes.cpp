#include <iostream>
using namespace std;
 //function to find maxlength of sequences of 0's and 1's.
int longestSeq(int binaryarr[], int n)
{   
    int maxLength=0;

    for(int start=0;start<n;start++){
        int zeroes=0, ones=0;
        for(int end=start;end<n;end++){
            if(binaryarr[end]==0){
                zeroes++;
            } else{
                ones++;
            }
            if(zeroes==ones){
                maxLength=max(maxLength,(end-start)+1);
            }
        } 

    }
   
    return maxLength;
}
 
int main()
{
   int size;
   cout<<"Enter size:";  cin>>size;

   int binaryarr[size];

   cout<<"Enter binary array:";
   for(int i=0;i<size;i++){
    cin>>binaryarr[i];
   }

   cout<<"Max length of equal 0's and 1's:"<<longestSeq(binaryarr,size)<<endl;
   cout<<"Max consecutive pairs of 0's and 1's is:"<<longestSeq(binaryarr,size)/2;
    
    
    return 0;
    }