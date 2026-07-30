#include <iostream>
#include <cstring>
using namespace std;

int strLength(char ch[]){
    int n = 0;
    while(ch[n] != '\0'){
        n++;
    }
    return n;
}
void reverseStr(char ch[],int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        swap(ch[left], ch[right]);
        left++;
        right--;
    }
    
}
void upperCase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index]>= 'a' && ch[index]<='z'){
            ch[index] = ch[index] - 'a'+'A';
        }
        index++;
    }

    

}
void replace(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }

}
int main(){
   
    char ch[100];
    cin.getline(ch,20);
    
    cout<<ch<<endl;

    int length = strLength(ch);
    cout<<length<<endl;
    reverseStr(ch,length);
    upperCase(ch);
    replace(ch);
    cout<<ch;


    return 0;
    

}