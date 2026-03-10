#include <iostream>
using namespace std;

//area of circle
float areaOfCircle(int r){
    float pi = 3.14;
    float area = pi*r*r;
    return area;

}
//factorial of a no
float factorial(int n){
    int fact=1;
     for(int i = 1 ; i <= n ; i++){
        fact= fact*i;

     }
     return fact;
}

int main(){
   int n;
   cin>>n;
   float result = areaOfCircle(n);
   cout<<result<<endl;

   int fact = factorial(n);
   cout<<fact<<endl;






    return 0;

}
