#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];

}
void printvv(vector<vector<int>> &nums){
    int n = nums.size();

    for(int i = 0 ; i <n ;i++){
        for(int j = 0 ; j<nums[i].size();j++){
            cout<<nums[i][j]<<" ";
        }
    }
}
int main(){
    
    vector<vector<int>> nums;
    int n,x,s; 
    cout<<"enter the size:"<<" ";
    cin>>n;
   
    for(int  i = 0 ; i<n; i++){
        cin>>x>>s;
        vector<int>temp;
        temp.push_back(x);
        temp.push_back(s);
        nums.push_back(temp);
    }
    
   
    printvv(nums);
    sort(nums.begin(),nums.end(),comp);
    printvv(nums);
    return 0;
}