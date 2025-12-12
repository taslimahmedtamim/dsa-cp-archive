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
    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    cout<<sSmallest<<endl;
    return 0;
}

// Time complexity : O(n)