#include<bits/stdc++.h>
using namespace std;

void bubbleSort_AscendingOrder(int n, int arr[]){
    
    for(int i = 0; i<n-1; i++){
        int swap = 0;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort_DescendingOrder(int n, int arr[]){
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort_AscendingOrder(n, arr);

    return 0;
}
// Time complexity : O(n^2)