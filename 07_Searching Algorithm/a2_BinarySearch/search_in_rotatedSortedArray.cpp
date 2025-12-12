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
    int target;
    cin>>target;

    int low = 0, high = n-1;
    int result = -1; // if value is not present returns -1

    while(low<=high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            result = mid;
            break;
        }

        // 3 2 3 3 3 rotated sorted array with duplicate values
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){ // if duplicate value occurs just trimmed down search space
            low++;
            high--;
            continue;
        }

        if(arr[low]<=arr[mid]){  // if left half is sorted
            if(arr[low]<=target && target <= arr[mid]){ // if target is greater than arr[low] and less than arr[mid]
                high = mid - 1; // eliminate the right side because target isn't here for sure
            }
            else{ // if target is not between arr[low] and arr[mid] 
                low = mid + 1; // eliminate left side 
            }
        }
        else{ // if right half is sorted
            if(arr[mid]<=target && target<=arr[high]){ // if target lies here
                low = mid + 1; // eliminate the left side
            }
            else{
                high = mid - 1; // eliminate the right side
            }
        }
    }
    cout<<result<<endl;
    return 0;
}


