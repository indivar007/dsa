#include <iostream>
#include <limits.h>
using namespace std;

void  sumrowwise(int arr[][4], int rows,int cols){
    
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0; j<cols ; j++){
            cin>>arr[i][j];

        }

    }
    for(int i = 0 ; i<3 ; i++){
        int sum = 0;
        for(int j = 0; j<4 ; j++){
           sum = sum + arr[i][j];
          
            
           
        }
         cout<<sum<<endl;

    }




}

int main(){
    
    int arr[3][4];
    int rows;
    int column;

    sumrowwise(arr, 3,4);

    return 0;
}