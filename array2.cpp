#include <iostream>
using namespace std;

//right shifting by 1
void shifting(int arr[],int size){
    int temp=arr[size-1];

    for(int i = size-1; i>0 ; i-- ){
        arr[i] = arr[i-1];






    }
    arr[0 ]=temp;

}

    

   

   


int main(){
    //taking an array and sorting 0 and 1s
 int arr[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140};
 int size =14;
 shifting(arr,size);


  for (int i = 0 ; i< size ;i++){
    cout<<arr[i];
  }

   
    
    


}