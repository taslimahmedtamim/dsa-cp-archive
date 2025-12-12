#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;
    int a = 7, b = 5;
    if(a>b){
        cout<<"a is greater"<<endl;
    }
    else if(b>a){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}