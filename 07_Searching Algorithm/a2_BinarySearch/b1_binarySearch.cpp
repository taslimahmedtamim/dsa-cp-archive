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
    int value;
    cin>>value;

    bool flag = true;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==value){
            cout<<"index: "<<mid<<endl;
            flag = true;
            break;
        }
        else if(value>arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!flag){
        cout<<"Not found"<<endl;
    }
    return 0;
}