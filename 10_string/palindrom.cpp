#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    getline(cin , str);
    string original_str = str; 

    reverse(str.begin(), str.end()); // inbuilt function
    
    if(str == original_str){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    cout<<str<<endl;

    return 0;
}