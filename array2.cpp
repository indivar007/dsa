#include <iostream>
using namespace std;


int pairing(int arr[],int size){
    
    for(int i =0 ; i< size;i++){
        for(int j = 0;j <size;j++){

            if(arr[i] == arr[j]){
                cout<<endl;

            }else{
            cout<<arr[i]<<","<<arr[j]<<endl  ;    
        
            }

    }

}}
   


int main(){
    //taking an array and find unique element in it


    int arr[9]= {10,20,30,40,50,40,30,20,10};
    int size = 9;
     pairing(arr,9);
    
    


}