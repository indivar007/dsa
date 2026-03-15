#include <iostream>
#include <vector>
using namespace std;

//finding key pair in a 2d array
void allPair(vector<vector<int>>&arr,int rows ,int cols){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cin>>arr[i][j];

        }

    }
    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j < cols ; j++){

    //         for(int k = i ; k <rows ; k++){

    //             for(int l = j+1 ; l < cols ; l++ ){
    //                 cout<<"("<<arr[i][j]<<" ,"<<arr[k][l]<<"\t"<<" )";

    //             }

    //         }
           
    //         cout<<endl;
    //     }

        

    // }
  //how to make a vectoe flat 
  vector<int> flat;
  for(int i = 0 ; i <rows;i++){
    for(int j = 0 ;  j < cols ; j++){
        flat.push_back(arr[i][j]);
        cout<<arr[i][j];
    }
  }
  for(int i = 0 ; i <flat.size() ; i++){
    for(int j = i+1 ; j<flat.size(); j++){
        cout<<"("<<flat[i]<<","<<flat[j]<<")"<<endl;;
    }

  }
}

int main(){
    int rows = 4;
    int cols = 4;
    vector<vector<int>> arr(rows, vector<int>(cols));
   


    allPair(arr,rows,cols);

}