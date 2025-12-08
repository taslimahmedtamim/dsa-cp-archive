#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void brute(){
    int n;
    cin>>n;
    set<int>s;
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        s.insert(t);
    }
    cout<<"No. of unique element :"<<s.size()<<endl;
    for(auto it : s){
        cout<<it<<" ";
    }
}
// Time complexity : O(nlogn + n) => O(nlogn)
// space complexity : O(n)



void optimal_2pointerApproch(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    cout<<(i+1)<<endl;
    for(int k = 0; k<=i; k++){
        cout<<arr[k]<<" ";
    }
}
// Time complexity : O(n)
// space complexity : O(1)


int main(){
    fastio;
    // brute();
    optimal_2pointerApproch();
    
    return 0;
}

