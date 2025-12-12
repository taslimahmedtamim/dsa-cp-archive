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

    int low = 0, high = n-1;
    int locc = -1; // returns -1 if not found


/* 
    1 2 2 2 3 -> To find the last occurence in a sorted array. last occurence of 2 is in the 3rd index. 
    We can say it will always occure at the mid itself or in the rightside from the mid.
    That's why after finding the value we are only going for searching the same value in the rightside 
    and element the left side
*/
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
    cout<<locc<<endl;
    return 0;
}