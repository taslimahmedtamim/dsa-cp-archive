#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
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
    for(int i = 1; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
// Total time complexity : O(n * sqrt(n))