#include<bits/stdc++.h>
using namespace std;

void bruteForceSum(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int sum = 0;
        int l,r;
        cin>>l>>r;
        for(int i = l; i<=r; i++){
            sum+=arr[i];
        }
        cout<<sum<<"\n";
    }
} 
// Time Complexity: O(n) + O(q*n) => O(n^2)



void prifixSum_index_based_0(){
    int n;
    cin >> n;
    int arr[n];
    int pf[n + 1];

    pf[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pf[i + 1] = pf[i] + arr[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pf[r + 1] - pf[l] << "\n";
    }
}


void prifixSum_index_based_1(){
    int n;
    cin>>n;
    int arr[n+1];
    int pf[n+1];
    pf[0] = 0;
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
        pf[i] = pf[i-1]+arr[i];
    }
    //-->O(n)
    
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<"\n";
    }
    //-->O(q)
}

// Time complexity : O(n) + O(q) => O(n)

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    // bruteForceSum();
    // prifixSum_index_based_0();
    prifixSum_index_based_1();

    return 0;
}
