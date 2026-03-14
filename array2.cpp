#include <iostream>
using namespace std;


void triplets(int arr[], int size){
    int i , j ,k;
    for(i = 0 ; i<size; i++){
        for(j = i+1 ; j<size ; j++){
            for(k = j+1 ; k<size; k++){
                cout<<arr[i]<<','<<arr[j]<<','<<arr[k]<<endl;
            }
        }
    }
}
   


int main(){
    //taking an array and find unique element in it

    int arr[5]={0,1,2,3,4};
    int size =5  ;
    triplets(arr,5);
    
    


}