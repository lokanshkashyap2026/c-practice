#include<iostream>
#include<string>
using namespace std;
int strCount(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int main(){
    char str[] = "hello world welcome";
    cout<<strlen(str)<<"\n";
    cout<<strCount(str)<<endl;
    reverse(str,strCount(str));
    cout<<str<<endl;

    // char temp[] = "";
    // for(int i=0;str[i]!='\0';i++){
    //     // if(str[i]==" "){
    //     //     temp[i] = str[i]
    //     // }
    // }
    return 0;
}