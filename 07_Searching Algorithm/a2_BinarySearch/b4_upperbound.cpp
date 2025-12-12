#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"


// upper it always returns the greater value index than the targeted one. Doesn't matter if the targeted value is present or not.
// 1,2,3,5,6 -> here if we try to find value 5. It returns the index no. of value 6. upperbound_index = 4

void upperbound(vector<int>& arr, int n, int value){
    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(value<arr[mid]){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"Upperbound Index : "<<ans<<endl;
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

    // Upperbound(arr, n, value);
    
    
    auto it = upper_bound(arr.begin(), arr.end(), value); // inbuilt upperbound function returns iterator
    int index = it-arr.begin(); // we get index by doing pointing iterator - first iterator 
    cout<<index<<endl;

    return 0;
}