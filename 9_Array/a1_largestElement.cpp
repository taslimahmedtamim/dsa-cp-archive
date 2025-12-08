#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void bruteForce(vector<int>&arr, int n){
    sort(arr.begin(), arr.end());
    cout<<"Largest Element : "<<arr[n-1]<<endl;
}
// Time complexity : O(NlogN)

void optimal(vector<int>&arr, int n){
    int largest = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element : "<<largest<<endl;
}
// Time complexity : O(N)

int main(){
    fastio;

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // BruteForce(arr, n);
    optimal(arr, n);
    return 0;
}
