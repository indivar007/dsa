#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //upper half
    for(int i = 0 ; i<n ; i++){
        for(int k = 0 ; k< n-i-1;k++){
            cout<<" ";
        }
        for(int j = 0 ; j<=i ;j++){
            cout<<"* ";
        }
        cout<<endl;
        }
        for(int i = n-2 ; i>=0 ; i--){
            for(int k = 0 ; k< n-i-1;k++){
            cout<<" ";
        }
        
        for(int j = 0 ; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
        }
 return 0;
}
