#include <iostream>
using namespace std;

int main(){
//    for(int i=0 ;i<=4 ;i=i+1 ){
//     for(int j=0; j<=i; j++){
//         cout<<j;
        

//         }
//         cout<<endl;
//     }
int n;
   cin>> n ;

   for (int i=0 ;i <=n ;i++ ){
    for(int j=0; j <= n-i; j++){
        cout<<j+1;
        

        }
        cout<<endl;
    }
    
   
return 0;
}


