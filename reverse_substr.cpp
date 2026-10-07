#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if( ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}

void reverse(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    
}

int main(){
    char str[50] = "hello world";
    for(int i=0;str[i]!='\0';i++){
        if(str[i] ==' '){
            str
        }
    }
    return 0;
}