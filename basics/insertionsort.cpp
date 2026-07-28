#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size()-1;

    for(int  i = 1; i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    int i = 0;
     while(i<n){
        cin>>arr[i];
        i++
     }
}