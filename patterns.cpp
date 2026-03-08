#include <iostream>
using namespace std;

int main(){
    //this is for pyramid pattern

//     for(int i = 0 ; i <= 5; i++){
//     for(int j =0 ; j <=i; j++){
//         cout<<" ";
//         }
//         for(int k = 0 ; k <= 5-i; k++){
//             cout<<"* ";
        

//     }
//    cout<<endl;
// }
int n;
cin>>n;

for(int i = 0 ;i<= n ;i++){
   
    for(int k = 0 ; k <= i; k++){
        cout<<"* ";
    }
     

    cout<<endl;

}
for(int i = 0 ;i<= n ;i++){
   
    for(int k = 0 ; k <= n-i-1; k++){
        cout<<"* ";
    }
     
    
    cout<<endl;

}

 return 0;
}
