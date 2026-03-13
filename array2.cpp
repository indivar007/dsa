#include <iostream>
using namespace std;


int uniqueElement(int arr[],int size) {
    int unique = 0;
    for(int i = 0 ;i <size ; i++){
        unique = unique^arr[i];
    }
    return unique ;
}

int main(){
    //taking an array and find unique element in it


    int arr[9]= {10,20,30,40,50,40,30,20,10};
    int size = 9;
    int result = uniqueElement(arr,9);
    cout<<result<<endl;


}