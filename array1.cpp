#include <iostream>
using namespace std;

int main(){
   //linear search in array
   int arr[5];
   int n =5;
   int target = 781;
   bool flag = 0; 
   for(int i =0 ; i<n ;i++){
    cin>>arr[i];


   }
   for(int i =0 ; i<n ;i++){
    if(arr[i] == target){
        flag = 1;
        break;
    }
    
   }
   if(flag == 1){
    cout<<"found"<<endl;
   }
   else{
    cout<<"not found";
   }
    return 0;

}