#include <iostream>
#include <limits.h>
using namespace std;

void  sumrowwise(int arr[][4], int rows,int cols){
    
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0; j < cols ; j++){
            cin>>arr[i][j];

        }

    }

    int temp ;
 
    
    for(int i = 0 ; i<rows ; i++){
        
        for(int j = i+1; j<cols ; j++){

            //transpose
            temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i] = temp;

            
           
        }
         

    }
    for(int i = 0 ; i<cols ; i++){
        
        for(int j = 0; j<rows ; j++){

            //transpose
           cout<<arr[i][j]<< "\t";

            
           
        }
        cout<<endl;
         

    }
   




}

int main(){
    
    int arr[4][4];
    int rows;
    int column;

    sumrowwise(arr, 4,4);

    return 0;
}