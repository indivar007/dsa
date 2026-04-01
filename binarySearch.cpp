#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int firstOccurance(vector<int> &arr,int size, int target){
//     int left = 0 ;
//     int right = size-1;
//     int ans =-1;
    
//     while(left <= right ){
//         int mid = (left+right)/2;
//         if(arr[mid] == target){
//             ans = mid;
//             right = mid-1;

//         }
//         else if(arr[mid] > target){
//             right = mid -1;

//         }
//         else{
//             left = mid +1;
//         }
//     }
//     return ans;

// }

// int lastOcuurance(vector<int> &arr,int size ,int target){
//     int left = 0 ;
//     int right = size-1;
//     int ans;
//     while(left <= right){
//         int mid = (left + (right-left)/2);
//         if(arr[mid] == target){
//             ans = mid;
//             left = mid+1;

//         }
//         else if(arr[mid] < target){
//             left = mid +1;
//         }
//         else{
//             right = mid-1;
//         }

//     }
//     return ans;

// }
// int totalOcuurance(vector<int> &arr,int size,int target){
//     int last = lastOcuurance(arr ,size ,target);
//     int first = firstOccurance(arr,size,target);
//     int total = last-first+1;
//     return total;


// }


// int missingNo(vector<int> &arr,int size){
//     int left = 0;
//     int right = size-1;
//     int ans = size+1;
    

//     while(left <= right){
//         int mid = left + (right-left)/2;
//         if(arr[mid] == mid+1){
//             left = mid+1;
//         }
//         else {
//             ans = mid+1;
//             right = mid-1;
//         }


//     }

//     return ans;
// }

// int peakMountain(vector<int>& arr){
//     int left = 0;
//     int right = arr.size()-1;
//     while(left <= right){
//         int mid = left + (right-left)/2;
//         if(arr[mid] <= arr[mid+1]){
//             left = mid+1;

//         }
//         else{
//             right = mid;
//         }
//     }
//     return left;

// }

int pivotElement(vector<int>& arr,int size){
    int left = 0;
    int right  =  size-1;
    while(left <= right){
        int mid  = left + (right-left)/2;
        if(left == right){
            return left;
        }
        if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[left]>arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        

    }
    return -1;
}
int pivotSmallest(vector<int>& arr, int size){
    int left =0 ;
    int right =size-1;
    while(left <= right){
        int mid = left + (right -left)/2;
        if(left = right ){
            return left;
        }
        if(arr[mid] < arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            return mid-1;
        }
        else if(arr[left]<arr[mid]){
            right = mid -1;
        }
        else{
            left = mid+1;
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
    // sort(arr.begin(), arr.end());

    // int target ;
    // cin>>target;

    // int res = firstOccurance(arr,size,target);
    // cout<<"the index at which target is first ocuured"<<" "<<res<<endl;

    // int res1 = lastOcuurance(arr,size,target);
    // cout<<"the index where last ocuurance of target is there at"<<" "<<res1<<endl;

    // int total = totalOcuurance(arr, size,target);
    // cout<<"total no of occurance is"<<" "<<total<<endl;

    // int missing = missingNo(arr,size);
    // cout<<missing<<endl;
    cout<<pivotElement(arr,size)<<endl;
    cout<<pivotSmallest(arr,size);
}