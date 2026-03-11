#include <iostream>
#include <limits.h>
using namespace std;

int minOf(int arr[],int size){
    int min = INT_MAX;
    for(int i  = 0 ; i <size;i++ ){
        if(arr[i] < min ){
            min = arr[i]; 

        }
    }
    return min;
}
int main(){
    int arr[8]= {70,75,150,250,100,390,1,-350};
    int size = 8;
    int result = minOf(arr ,size);
    cout<<result<<endl;
   

  
    return 0;

}