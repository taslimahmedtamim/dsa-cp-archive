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
    sort(arr, arr+n);

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}

// Time complexity : O(nlog(n))