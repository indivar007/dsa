//learning call by reference and cvall by value 
#include <iostream>
 using namespace std;

 int callByValue(int n){
    n++;
    return n;
 }

 int main(){
    int n  ;
    cin>>n;
    int result = callByValue(n);
    cout<<result<<endl;

    cout<<n<<endl;//here the n remains same as it is called by call by value there is no change in original adress
    
    
 }