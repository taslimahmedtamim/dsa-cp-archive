#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int first = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = first;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// Time complexity : O(n)
// space complexity : O(1)
