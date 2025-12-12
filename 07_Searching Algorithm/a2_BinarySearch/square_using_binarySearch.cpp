#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;

    int n;
    cin>>n;
    int low = 0, high = n;
    long long ans = 1;

    while(low<=high){
        long long mid = low+(high-low)/2;
        long long s = mid*mid;
        if(s <= n){
            ans = mid;
            low = mid+1; // always look for the bigger possible value so eliminate the left half
        }
        else{
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

