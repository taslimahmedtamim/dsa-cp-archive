/*
    Create a .cpp file and input.txt and output.txt files in the same directory as this file for file I/O.
    Input will be taken from input.txt and output will be written to output.txt when not running
*/

/*
    Compile & Run C++

    Windows:
    CMD:
        g++ file_name.cpp -o file_name && file_name.exe

    PowerShell:
        g++ file_name.cpp -o file_name; .\file_name.exe

    Git Bash:
        g++ file_name.cpp -o file_name && ./file_name

    Linux / macOS:
        g++ file_name.cpp -o file_name && ./file_name

*/

/*
    example:
        // to compile and run cp.cpp file in windows cmd write:
        g++ cp.cpp -o cp && cp.exe
*/

/*
    For other languages:

    C        : gcc file.c -o file && ./file
    C++      : g++ file.cpp -o file && ./file
    Java     : javac File.java && java File
    Python   : python file.py
    JS       : node file.js

*/

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
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

