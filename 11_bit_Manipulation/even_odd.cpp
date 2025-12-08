#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 

int main(){
    fastio;


    long long n;
    cin >> n;
    
    if(n & 1){
        cout << "Odd" << endl;
    }
    else{
        cout << "Even" << endl;
    }
    
    return 0;
}