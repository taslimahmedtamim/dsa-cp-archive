// Compile & Run C++

// Windows:
// CMD:
//   g++ file_name.cpp -o file_name && file_name
// PowerShell:
//   g++ file_name.cpp -o file_name; .\file_name.exe

// Linux / macOS:
//   g++ file_name.cpp -o file_name && ./file_name

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



// snippets copy and paste below code in cpp.json:
// Now create .cpp file and write cpp_boilerplate hit enter template.
{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the
	// same ids are connected.
	// Example:
	"cpp": {
		"prefix": "cpp_boilerplate",
		"body": [
			"#include<bits/stdc++.h>",
			"using namespace std;",
			"#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);",
			"#define endl \"\\n\" ",
			"",
			"int main(){",
			"	fastio;",
			"",
			"   int t;",
			"   cin>>t;",
			"   while(t--){",
			"       $1",
			"   }",
			"   return 0;",
			"}"
		],
		"description": "Boilerplate for Ccompetitive programmers in c++"
	}
}
