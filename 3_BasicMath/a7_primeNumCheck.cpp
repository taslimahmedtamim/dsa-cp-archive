#include<bits/stdc++.h>
using namespace std;

bool isPrimeBruteforce(int n){
    if(n<2){
        return false;
    }
    int count = 0;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        return true;
    }
    else{
        return false;
    }
}
// Time complexity : O(n)

bool isPrimeOptimized(int n){
    int count = 0;
    
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i != i) count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
// Time complexity : O(sqrt(n))

int main(){
    int n;
    cin>>n;
    
    if(isPrimeOptimized(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}