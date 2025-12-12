#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int s = 0;
    while(n>0){
        int rem = n%10;
        s = (s*10) + rem;
        n=n/10;
    }
    return s;
}
// Time complexity : O(log10(n))

int main(){
    int n;
    cin>>n;
    int revN = reverseNum(n);
    if(n==revN){
        cout<<"palindrome"<<"\n";
    }
    else{
        cout<<"Not palindrome"<<"\n";
    }
    return 0;
}
