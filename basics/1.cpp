#include <iostream>
#include<vector>
using namespace std;

void elements(vector<int> &arr){
    int n = arr.size();
    int min = arr[0] ;
    int max = arr[0]; 
    for(int  i = 0 ; i <= n-1; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if (arr[i]>max){
            max = arr[i] ;
        }

    }
    cout<<"the min element in array is :"<<min;
    cout<<"the largest element in array is:"<<max;

}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i <= n-1;i++){
        cin>>arr[i];
    }
    
    elements(arr);

}