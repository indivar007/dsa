#include <iostream>
#include<vector>
using namespace std;
//Reverse an array (in-place, two-pointer)

void reverseArray(vector<int> &arr){
     
    int temp;
    int left= 0;
    int right =arr.size()-1;
    
    while(left<right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;

    }
    
   
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i <=n-1;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    int i = 0;
    while(i<n){
        cout<<arr[i];
        i++;
    }
    return 0;
}