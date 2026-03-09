#include <iostream>
using namespace std ;

// int printSum(int a , int b, int c){
   
   
//     int  sum = a+b+c;
//     return sum;//using return function
// }
// int maxOf(){

//     int a, b, c;
//     cin>>a>>b>>c;
//     if(a>b && a > c){
//         cout<<"the largest no is:"<<a<<endl;
//     }
//     else if(b>a && b >c){
//         cout<<"the largest no is :"<<b<<endl;
//     }
//     else{
//         cout<<"the largest no is:"<<c<<endl;
//     }

// }
int count(int n)
{
    for(int i = 1; i <=n ;i++){
        cout<<i<<endl;
    }
}
int checkPrime(int a){
    int i ;
    for(i =2 ; i < a;i++){
        if(a % i == 0){
            cout<<"its composite number";
            return 0;

        }
             cout<<"prime"<<endl;
          
    }
}
void evenOdd(int n){

    if(n % 2 == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

}

int addN(int n){
    int sum = 0;
    for(int i =0 ; i <= n; i++ ){
        sum = sum+i;
        
    }
    return sum;
}

int main(){
    

    // cout<<  (sum = printSum( 5 ,4 ,6));

    // maxOf();/
    count(100);
    checkPrime(9);
    int a;
    
    cin>>a;
    evenOdd(a);
    addN(a);

    return 0;
}