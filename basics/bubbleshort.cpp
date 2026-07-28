#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size()-1;
    int temp;
    for(int i = 0 ; i< n ; i++){
       for(int j = 0 ; j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
        
    }
        
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i <=n-1;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);
    int i = 0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
}