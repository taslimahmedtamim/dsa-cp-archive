#include<bits/stdc++.h>
using namespace std;


void bruteForceDivisors(){
    int n;
    cin>>n;
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"Total divisors: "<<count<<endl;
}
// Time complexity : O(n)


void optimizedDivisors(){
    int n;
    cin>>n;
    int count = 0;  
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
            if(n/i!=i){
                cout<<n/i<<" ";
                count++;
            }
        }
    }
    
    cout<<"Total divisors: "<<count<<endl;
}
// Time complexity : O(sqrt(n))


int main(){

    // bruteForceDivisors();
    optimizedDivisors();
    return 0;
}
