#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<size;i++){
       cout<<arr[i]<<endl;
    }
    
}
int linearSearch(int arr[],int size,int target){
    for(int i = 0 ; i< size ; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5];
    int size = 5;
    int target = 100;
    
    printArray(arr,size) ;
    int result  = linearSearch(arr, size, target);
    if(result == 1 ){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }



  
    return 0;

}