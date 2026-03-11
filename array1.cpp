#include <iostream>
using namespace std;

int main(){
    int arr[50]= {1,2,3,4,5,6,7,8,9,10,111,12,12,1,2,1,2,1,2,1,2,1};
    
    cout<<"the adress of array is"<<
    int(arr)<<endl;
    cout<< arr[2];
    int n  =50;
    for(int i =0 ;i<=n;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    int age[10];
    int a = 10 ;
    for(int i  = 0 ; i < a ;i++ ){
        cout<<"the index is"<< i<<":";
        cin>>age[i];
        
    }
    for(int i = 0 ;i <a ;i++){
        cout<<age[i]<<endl;
    }
    return 0;
}