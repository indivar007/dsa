#include <iostream>
#include <vector>
using namespace std;


//missing number
void missingNumber(vector<int> &arr,int n) {
    for(int i =0;i<arr.size();i++){
        cin>>arr[i];

}

    int expectedSum = n * (n+1)/2;
    int sum = 0;
    for(int i = 0 ; i < arr.size();i++){
        sum += arr[i];
    }

    int missing = expectedSum-sum;
    cout<<missing;

}




int main(){
     int size=5;
   vector<int> arr(size);
 
   missingNumber(arr,size);

   

}