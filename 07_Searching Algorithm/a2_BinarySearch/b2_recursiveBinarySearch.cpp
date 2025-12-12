#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int binarySearch(vector<int>& arr, int low, int high, int target){
    if(low>high){
        return -1;
    }
    int mid = low + (high-low)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(target>arr[mid]){
        return binarySearch(arr, mid+1, high, target);
    }
    else{
        return binarySearch(arr, low, mid-1, target);
    }

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

    int b = binarySearch(arr, 0, n-1, value);
    if(b==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at Index : "<<b<<endl;
    }
    
    return 0;
}


// use stack space & space complexity is : O(log n)
// time complexity : O(log n)