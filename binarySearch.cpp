#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> &arr,int size, int target){
    int left = 0 ;
    int right = size-1;
    
    while(left <= right ){
        int mid = (left+right)/2;
        if(arr[mid] == target){
            return mid;

        }
        else if(arr[mid] < target){
            left = mid+1;

        }
        else{
            right = mid-1;
        }
    }
    return -1;

}

int main(){
    
    int size ; 
    cin>>size;
    vector<int> arr(size);
    for(int i = 0 ; i < size; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    int target ;
    cin>>target;

    int res = binarySearch(arr,size,target);
    cout<<"the index at which target is there"<<res<<endl;


}