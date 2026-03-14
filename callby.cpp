//learning call by reference and cvall by value 
#include <iostream>
 using namespace std;

 int callByValue(int &n){
    n++;
    return n;
 }

 int main(){
    int n  ;
    cin>>n;
    int result = callByValue(n);
    cout<<result<<endl;

    cout<<n<<endl;// now as i have passed reference in function it changes ont he original adress 

    
 }