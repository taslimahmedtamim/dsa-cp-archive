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
    int focc = -1; // returns -1 if not found


/* 
    1 2 2 2 3 -> To find the first occurence in a sorted array. first occurence of 2 is stored in 1st index
    We can say it will always occure at the mid itself or in the leftside from the mid.
    That's why after finding the value we are only going for searching the same value in the leftside 
    and element the right side
*/
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
    cout<<focc<<endl;
    return 0;
}