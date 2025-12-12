#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

// rotated sorted array : 7 8 9 1 2 3 4 5 6  , sorts breaks at some point then again sorted 
// we have to find a sorted half then search for the targeted value

int main(){
    fastio;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i]; 
    }

    int low = 0, high = n-1;
    int minimum = INT_MAX; // if value is not present returns -1

    while(low<=high){
        int mid = low + (high - low)/2;

        if(arr[low]<=arr[high]){ // search space is sorted 
            minimum = min(minimum, arr[low]); // so arr[low] has the minimum value for sure
            break; // no need further check
        }

        if(arr[low]<=arr[mid]){ // left side is sorted
            minimum = min(minimum, arr[low]); // pick the low because it is the minimum in the sorted array
            low = mid - 1; // then eliminate the left side
        }
        else{ // right side is sorted
            minimum = min(minimum, arr[mid]); // then pick the arr[mid] because it is the minimum value in the right side
            high = mid - 1; // eliminate the right side
        }
    }
    cout<<minimum<<endl;
    return 0;
}


