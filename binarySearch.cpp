#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // int firstOccurance(vector<int> &arr,int size, int target){
// //     int left = 0 ;
// //     int right = size-1;
// //     int ans =-1;
    
// //     while(left <= right ){
// //         int mid = (left+right)/2;
// //         if(arr[mid] == target){
// //             ans = mid;
// //             right = mid-1;

// //         }
// //         else if(arr[mid] > target){
// //             right = mid -1;

// //         }
// //         else{
// //             left = mid +1;
// //         }
// //     }
// //     return ans;

// // }

// // int lastOcuurance(vector<int> &arr,int size ,int target){
// //     int left = 0 ;
// //     int right = size-1;
// //     int ans;
// //     while(left <= right){
// //         int mid = (left + (right-left)/2);
// //         if(arr[mid] == target){
// //             ans = mid;
// //             left = mid+1;

// //         }
// //         else if(arr[mid] < target){
// //             left = mid +1;
// //         }
// //         else{
// //             right = mid-1;
// //         }

// //     }
// //     return ans;

// // }
// // int totalOcuurance(vector<int> &arr,int size,int target){
// //     int last = lastOcuurance(arr ,size ,target);
// //     int first = firstOccurance(arr,size,target);
// //     int total = last-first+1;
// //     return total;


// // }


// // int missingNo(vector<int> &arr,int size){
// //     int left = 0;
// //     int right = size-1;
// //     int ans = size+1;
    

// //     while(left <= right){
// //         int mid = left + (right-left)/2;
// //         if(arr[mid] == mid+1){
// //             left = mid+1;
// //         }
// //         else {
// //             ans = mid+1;
// //             right = mid-1;
// //         }


// //     }

// //     return ans;
// // }

// // int peakMountain(vector<int>& arr){
// //     int left = 0;
// //     int right = arr.size()-1;
// //     while(left <= right){
// //         int mid = left + (right-left)/2;
// //         if(arr[mid] <= arr[mid+1]){
// //             left = mid+1;

// //         }
// //         else{
// //             right = mid;
// //         }
// //     }
// //     return left;

// // }

// // int pivotElement(vector<int>& arr,int size){
// //     int left = 0;
// //     int right  =  size-1;
// //     while(left <= right){
// //         int mid  = left + (right-left)/2;
// //         if(left == right){
// //             return left;
// //         }
// //         if(arr[mid]<arr[mid-1]){
// //             return mid-1;
// //         }
// //         else if(arr[mid]>arr[mid+1]){
// //             return mid;
// //         }
// //         else if(arr[left]>arr[mid]){
// //             right = mid-1;
// //         }
// //         else{
// //             left = mid+1;
// //         }
        

// //     }
// //     return -1;
// // }
// // int pivotSmallest(vector<int>& arr, int size){
// //     int left =0 ;
// //     int right =size-1;
// //     while(left <= right){
// //         int mid = left + (right -left)/2;
// //         if(left = right ){
// //             return left;
// //         }
// //         if(arr[mid] < arr[mid+1]){
// //             return mid;
// //         }
// //         else if(arr[mid]>arr[mid-1]){
// //             return mid-1;
// //         }
// //         else if(arr[left]<arr[mid]){
// //             right = mid -1;
// //         }
// //         else{
// //             left = mid+1;
// //         }


// //     }
// //     return -1;

// // }
// // int main(){
     
// //     int size ; 
// //     cin>>size;
// //     vector<int> arr(size);
// //     for(int i = 0 ; i < size; i++){
// //         cin>>arr[i];
// //     }
// //     // sort(arr.begin(), arr.end());

// //     // int target ;
// //     // cin>>target;

// //     // int res = firstOccurance(arr,size,target);
// //     // cout<<"the index at which target is first ocuured"<<" "<<res<<endl;

// //     // int res1 = lastOcuurance(arr,size,target);
// //     // cout<<"the index where last ocuurance of target is there at"<<" "<<res1<<endl;

// //     // int total = totalOcuurance(arr, size,target);
// //     // cout<<"total no of occurance is"<<" "<<total<<endl;

// //     // int missing = missingNo(arr,size);
// //     // cout<<missing<<endl;
// //     cout<<pivotElement(arr,size)<<endl;
// //     cout<<pivotSmallest(arr,size);
// // }

// // int sqrt(int target ){
// //     int left  = 0 ;
// //     int right = target;
// //     int ans;
// //     while(left <= right){
// //         int mid  = left + (right-left)/2;
// //         if(mid*mid == target){
// //             return mid;
// //         }
// //         else if(mid*mid < target){
// //             ans=mid;//storing closest value
// //             left = mid+1;
// //         }
// //         else{
// //             right = mid-1;
// //         }
// //     }

// // }


// // int main(){
// //    int target;
// //    cin>>target;
   
// //    cout<<"Sqrt of this no is"<<sqrt(target);

// // }

// double quotient(int dividend,int divisor,int precision){

//     int left = 0 ;
//     int right = dividend;
//     int ans =-1;
//     while(left<=right){
//         int mid = left + (right-left)/2;
//         if(mid*divisor == dividend){
//             return mid;
//         }
//         if(mid*divisor < dividend){
//             ans = mid;
//             left= mid+1;
//         }
//         else{
//             right = mid-1;
//         }
//     }
//     double result = ans;//stores answer in result
//     double factor = 0.1;//decimal upto 10th place

//     for(int i  = 0 ;i<precision;i++){
//         while((result + factor) <= (double)dividend / divisor){
//             result+=factor;
//         }
//         factor /= 10;
//     }
//     return result;

// }
// int main(){
//     int dividend,divisor;
//     cin>>dividend>>divisor;
//     int precision=3;
//     double result = quotient(abs(dividend),abs(divisor),precision);
   

//     // if((dividend > 0 && divisor  >0) || (dividend < 0 && divisor  <0) ){
//     //      cout<<result;
//     // }
//     // else{
//     //     cout<< -(result);
//     // }
//     bool isnegative=(dividend<0)^(divisor<0);
//     if(isnegative){
//         result = -result;
//     }
//     cout<<result;

    
    
// }

int findElement(vector<int>& arr,int target){
    int left = 0 ;
    int right= arr.size()-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(mid-1 >= left && target == arr[mid-1]){
            return mid-1;

        }
        else if(target == arr[mid]){
            return mid;

        }
        else if(mid+1<= right && target == arr[mid+1]){
            return mid+1;

        }
        else if( target > arr[mid]){
            left = mid+2;

        }
        else{
            right = mid-2;
        }
    }
}

int main(){
    vector<int> arr = {20,10,30,50,40,70,60};
    int target = 20;
    int ans = findElement(arr,target);
    cout<<ans;
    return 0;
}