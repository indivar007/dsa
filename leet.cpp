#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pivot(vector<int>& arr, int size){
    int left = 0;
    int right = size-1;
    if (left == right){
        return left;
    }
    while(left <= right){
        int mid = left + (right-left)/2;
        
        if(mid>0 && arr[mid] < arr[mid-1]){
            return mid;
        }
        else if(mid < size-1 && arr[mid]>arr[mid+1]){
            return mid+1;
        }
        else if(arr[left] <= arr[mid] ){
            left = mid +1;
        }
        else{
            right = mid-1;
        }
        
    }
    return -1;
}

int binarySearch(vector<int>& arr,int left,int right, int target){
    
    while(left <= right){
        int mid = left +(right-left)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]<target){
           left = mid +1;
        }
        else{
            
            right = mid-1;
        }

    }
    return -1;
    
}
int targetElement(vector<int>& arr,int size,int target){
    int pivotIndex  = pivot(arr,size);
   
     if(pivotIndex == 0){
        return binarySearch(arr, 0, size-1, target);
    }
    if(target >= arr[0] && target <= arr[pivotIndex-1]){
        binarySearch(arr,0,pivotIndex-1,target);
    }
    else{
        binarySearch(arr,pivotIndex,size-1,target);
    }
    
}
// int findPivot(vector<int>& arr) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left < right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] > arr[right]) {
//             left = mid + 1;
//         } else {
//             right = mid;
//         }
//     }

//     return left; // index of smallest element (pivot)
// }

int main(){
    int size; 
    cin>>size;
    
    vector<int> arr(size);
    for(int i = 0 ; i < size; i++){
        cin>>arr[i];
    }
    cout<<pivot(arr,size)<<endl;

    // cout<<findPivot(arr)<<endl;
    cout<<targetElement(arr,size,15);

}

