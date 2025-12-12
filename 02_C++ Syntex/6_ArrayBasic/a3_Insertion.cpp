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
    
    int position, value;

    cout<<"Enter the position (Index no.) : ";
    cin>>position;
    cout<<"Enter the Value to insert : " ;
    cin>>value;


    for(int i = n; i>position; i--){
        arr[i+1] = arr[i]; 
    }

    arr[position] = value;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}