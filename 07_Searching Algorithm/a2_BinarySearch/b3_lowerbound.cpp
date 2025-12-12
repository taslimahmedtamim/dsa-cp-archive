#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"


// lowerbound return the targeted value index if it is present in the array, if the value is absent it returns slightly upper index 
// 1,2,3,5,6 -> here if we try to find value 4. It returns the index no. of value 5. lowerbound_index = 3

void lowerbound(vector<int>& arr, int n, int value){
    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(value<=arr[mid]){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"Lowerbound Index : "<<ans<<endl;
}

int main(){
    fastio;

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int value;
    cin>>value;

    // lowerbound(arr, n, value);
    
    auto it = lower_bound(arr.begin(), arr.end(), value); // inbuilt lowerbound function returns iterator
    int index = it-arr.begin(); // we get index by doing pointing iterator - first iterator

    return 0;
}

// Time complexity : O(log n)