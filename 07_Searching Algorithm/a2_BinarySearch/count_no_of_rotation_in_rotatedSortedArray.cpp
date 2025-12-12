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
    int rotation = 0;

    // we need to find the index of minimum number
    // 7 8 9 1 2 3 4 5 -> minimum element is 1 here index is 3 we can say array has been rotated for 3 times
    /*
        8 9 1 2 3 4 5 7 -> 1st rotation
        9 1 2 3 4 5 7 8 -> 2nd rotation
        1 2 3 4 5 7 8 9 -> 3rd rotation
    */
    while(low<=high){
        int mid = low + (high - low)/2;

        if(arr[low]<=arr[high]){ // search space is sorted 
            if(arr[low]<minimum){
                minimum = arr[low]; // so the minimum value here is arr[low]
                rotation = low;
            }
            break; // no need further check
        }

        if(arr[low]<=arr[mid]){ // left side is sorted
            if(arr[low]<minimum){
                minimum = arr[low]; // so the minimum value here is arr[low]
                rotation = low;
            }
            low = mid + 1; // then eliminate the left side
        }
        else{ // right side is sorted
            if(arr[mid]<minimum){
                minimum = arr[mid]; // so the minimum value here is arr[mid]
                rotation = mid;
            }
            high = mid - 1; // eliminate the right side
        }
    }
    cout<<rotation<<endl;
    return 0;
}


