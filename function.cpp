#include <iostream>
using namespace std ;

// int printSum(int a , int b, int c){
   
   
//     int  sum = a+b+c;
//     return sum;//using return function
// }
int maxOf(){

    int a, b, c;
    cin>>a>>b>>c;
    if(a>b && a > c){
        cout<<"the largest no is:"<<a<<endl;
    }
    else if(b>a && b >c){
        cout<<"the largest no is :"<<b<<endl;
    }
    else{
        cout<<"the largest no is:"<<c<<endl;
    }
}

int main(){
     int max;

    // cout<<  (sum = printSum( 5 ,4 ,6));

    maxOf();
}