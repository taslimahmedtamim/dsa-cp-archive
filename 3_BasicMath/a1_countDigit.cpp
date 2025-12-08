#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count = 0;

    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
// Time complexity : O(log10(n))

int main(){
    int n;
    cin>>n;
    int c = countDigit(n);

    // int c = (int)log10(n)+1; //another way to solve

    cout<<c<<"\n";
    return 0;
}