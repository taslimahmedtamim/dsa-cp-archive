#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int fastOccurence(vector<int>&arr, int low, int high, int value){
    int focc = 1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(arr[mid]== value){
            focc = mid;
            high = mid - 1;
        }
        else if(value>arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return focc;
}

int lastOccurence(vector<int>&arr, int low, int high, int value){
    int locc = -1;
    
    while(low<=high){
        int mid = low+(high-low)/2;
        
        if(arr[mid]== value){
            locc = mid;
            low = mid + 1;
        }
        else if(value>arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return locc;
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

    int focc = fastOccurence(arr, 0, n-1, value);
    int locc = lastOccurence(arr, 0, n-1, value);

    if(focc == -1 || locc == -1){
        cout<<-1<<endl; // value not found
        return 0;
    }
    // just subtracting locc and focc will give us how many time a value occurs

    int countOcc = (locc - focc) + 1;// for 0 based indexing
    cout<<countOcc<<endl;
    
    return 0;
}