#include <iostream>
using namespace std;

//area of circle
// float areaOfCircle(int r){
//     float pi = 3.14;
//     float area = pi*r*r;
//     return area;

// }
// //factorial of a no
// float factorial(int n){
//     int fact=1;
//      for(int i = 1 ; i <= n ; i++){
//         fact= fact*i;

//      }
//      return fact;
// }
//create number using digit

// int digit(int n){
//      int number = 0 ; 
//      int digit;

//      for(int i =0 ; i < n ; i++ ){
//         cin>>digit;
//         number = number * 10 +digit;
//      }
//      return number;

// }

//print all digit of an integer
int printDigit(int n){
    
    while(n>0){
        int digit= n%10;
        cout<<digit<<endl;
        n = n/10;


    }
   

}

int main(){
   int n;
   cin>>n;
//    float result = areaOfCircle(n);
//    cout<<result<<endl;

//    int fact = factorial(n);
//    cout<<fact<<endl;

   
    // int number = digit(n);
    // cout<<number<<endl;


       printDigit(n);
      
    return 0;

}
