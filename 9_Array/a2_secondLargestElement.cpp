#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void brute(vector<int>&arr, int n){
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    int sLargest = INT_MIN;

    for(int i = n-2; i>=0; i--){
        if(arr[i]!=largest){
            sLargest = arr[i];
            break;
        }     
    }
    if (sLargest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    }
    else {
        cout << "Second largest element : " << sLargest << endl;
    }
}
// Time complexity : O(nlogn + n)=> O(nlogn)

void better(vector<int>&arr, int n){
    int largest = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    int sLargest = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]<largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    if (sLargest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    }
    else {
        cout << "Second largest element : " << sLargest << endl;
    }

}
// Time complexity : O(N+N)=> O(2N)=> O(N)

void optimal(vector<int>&arr, int n){
    int largest = arr[0];
    int sLargest = INT_MIN;
    
    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]> sLargest){
            sLargest = arr[i];
        }
    }

    if (sLargest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    }
    else {
        cout << "Second largest element : " << sLargest << endl;
    }
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

    // brute(arr, n);
    // better(arr, n);
    optimal(arr, n);

    return 0;
}

