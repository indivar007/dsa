#include <iostream>
using namespace std;

void array2d(int arr[][4], int rows,int cols){
    int target =70;
    bool flag =0;
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0; j<cols ; j++){
            cin>>arr[i][j];

        }

    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            if(arr[i][j] == target ){
                flag =1;

                

            }
            
           
        }
        

    }
    if(flag ==1 ){
        cout<<"target found";

    }
    else{
        cout<<"target not found";
    }
    cout<<endl;

  

}

int main(){
    
    int arr[3][4];
    int rows;
    int column;

    array2d(arr, 3,4);

    return 0;
}