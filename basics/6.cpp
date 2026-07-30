// Find the second largest element in an array
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int secondLargestElement(vector<int>& nums){
    int n = nums.size();
    int largest = nums[0];
    int secondLargest = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0; i<n ;i++){
        cin>>nums[i];

    }
    int largest = secondLargestElement(nums);
    cout<<largest<<endl;
    return 0;
}