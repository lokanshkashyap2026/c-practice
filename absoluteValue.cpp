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

bool checkPalindrom(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowerCase(str[s]) != toLowerCase(str[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    
}
int getLength(char str[]){
    int count = 0;
    for(int i=0;str[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
char str[20];
cout<<"enter the string:"<<endl;
cin>>str;

cout<< getLength(str)<<endl;
reverse(str,getLength(str));
cout<<str<<endl;
cout<<"palindrom or not: "<<checkPalindrom(str,getLength(str));
return 0;
}