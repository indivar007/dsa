#include <iostream>
#include <limits.h>
using namespace std;

int array2d(int arr[][4], int rows,int cols){
    int max = INT_MIN;
   
    bool flag =0;
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0; j<cols ; j++){
            cin>>arr[i][j];

        }

    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            if(arr[i][j] > max ){
                max = arr[i][j];
                

                

            }
            
           
        }
        

    }

    cout<<endl;
    return max;

  

}

int main(){
    
    int arr[3][4];
    int rows;
    int column;

    cout<<array2d(arr, 3,4);

    return 0;
}