#include <iostream>
#include <limits.h>
using namespace std;

void reverseArray(int arr[],int size){
    
    int a = 0;
    int b = size-1;
    int temp;
    while(a<=b){
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;

        a++;
        b--;
        

    }
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<endl;

    }
    
}
int main(){
    int arr[7]= {70,75,150,250,100,390,1};
    int size = 7;
    reverseArray(arr,size);
   

  
    return 0;

}