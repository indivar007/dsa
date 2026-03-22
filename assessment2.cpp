#include <iostream>
#include <vector>
using namespace std;


//missing number
void removingDuplicates(vector<int> &arr,int n) {
    arr.resize(n);

    for(int i = 0 ; i < arr.size(); i++){
        cin>>arr[i];
    }

    vector<int> result;
    for(int i = 0 ;i < arr.size(); i++){
        bool duplicate = false;
        for(int j =0; j < i; j++){
            if(arr[i]== arr[j]){
            duplicate = true;
            break;
            }
        }
        if(!duplicate){
            result.push_back(arr[i]);
        
        }
    }
     cout << "After removing duplicates: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}
    

 




int main(){
     int size=5;
   vector<int> arr(size);
 
   removingDuplicates(arr,size);

   

}