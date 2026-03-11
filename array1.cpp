#include <iostream>
using namespace std;

void count(int arr[],int size){
    int countzero = 0;
    int countone = 0; 
    for(int i = 0 ;i <size ;i++){
        if(arr[i] == 0 ){
            countzero++;
        }
        else{ countone++;
        }
        


    }
    cout<<countzero<<endl;
    cout<<countone<<endl;
    

}
int main(){
    int arr[5]= {0,1,0,1,0};
    int size = 5;
    count(arr,size);
   

  
    return 0;

}