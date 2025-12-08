#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 

long long recursiveSum(long long n){

    if(n <= 0) return 0; // base case handles zero and negatives 
    return n + recursiveSum(n - 1);
}

int main(){
    fastio;

    long long n;
    cin>>n;

    cout << recursiveSum(n) << endl;
    return 0;
}