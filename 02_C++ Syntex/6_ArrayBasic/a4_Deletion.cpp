#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i]; 
    }
    
    int position;

    cout<<"Enter the position to delete an element : ";
    cin>>position;
    
    for(int i = position; i<n; i++){
        arr[i] = arr[i+1]; 
    }


    for(int i = 0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}