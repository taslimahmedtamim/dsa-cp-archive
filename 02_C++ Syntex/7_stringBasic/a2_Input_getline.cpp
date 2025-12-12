#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    
    cin.ignore(); // without this code will take one less input
    
    /*
        if t = 5; 
        it will take 4 string as a input
        reason is when we press enter it takes that enter as one of input
    */

    while(t--){
        string s;
        getline(cin, s);
        cout<<s<<"\n";
    }
    return 0;
}