#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                cout<< arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Time complexity : O(n^3)