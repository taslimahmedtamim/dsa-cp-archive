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
    cout<<"Enter the updated Value : " ;
    cin>>value;

    arr[position] = value;

    for(int i = 0; i<n; i++){
        cout<<arr[i];
        if(i<n-1){
            cout<<",";
        }
    }
    return 0;
}