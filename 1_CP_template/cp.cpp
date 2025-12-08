/*
    Create a .cpp file and input.txt and output.txt files in the same directory as this file for file I/O.
    Input will be taken from input.txt and output will be written to output.txt when not running
*/

/*
	Compile & Run C++

	Windows:
	CMD:
	  g++ file_name.cpp -o file_name && file_name
	PowerShell:
	  g++ file_name.cpp -o file_name; .\file_name.exe

	Linux / macOS:
	  g++ file_name.cpp -o file_name && ./file_name
*/


#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define MOD 1000000007

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fileIO(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve(){
    // Write your code here
}

int main(){

    fastIO();
    fileIO();

    int t;
    cin>>t;

    while(t--){
        solve();
    }

}



