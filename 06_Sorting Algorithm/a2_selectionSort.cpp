#include<bits/stdc++.h>
using namespace std;

void selectionSort_AscendingOrder(int n, int arr[]){
    for(int i = 0; i<n-1; i++){
        int mindex = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[mindex]){
                mindex = j;
            }
        }
        int temp = arr[mindex];
        arr[mindex] = arr[i];
        arr[i] = temp; 
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort_AscendingOrder(n, arr);

    return 0;
}
//Time complexity : O(n^2)