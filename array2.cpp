#include <iostream>
using namespace std;


void sort(int arr[], int size){
    int countzero =0 ;
    int onecount =0;

    int i,j;

    for (i = 0 ; i< size ;i++){
        if(arr[i] == 0 ){
            countzero++;
            
        
        }
        if(arr[i]== 1){
            onecount++;
        }
    }
    cout<<countzero<<endl;
    cout<<onecount<<endl;



    // for(i = 0;i < countzero ; i++){
    //     arr[i] = 0;
        
    // }
    // for(j =  i ; j<size; j++){
    //     arr[j]= 1;
        
    // }
    int index =0;
    while(countzero--){
        arr[index] = 0;
        index++;
        
    }

    while(onecount--){
        arr[index] =1;
        index++;

    }

    

   
}
   


int main(){
    //taking an array and sorting 0 and 1s
 int arr[]={0,1,1,1,0,0,0,0,0,0,1,1,1,0,0};
 int size =14;
 sort(arr,size);


  for (int i = 0 ; i< size ;i++){
    cout<<arr[i];
  }

   
    
    


}