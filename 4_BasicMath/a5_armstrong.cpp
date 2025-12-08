#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int temp = n;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp = n;
    int s = 0;
    while(temp>0){
        int r = temp % 10;
        s = s + pow(r, count);
        temp/=10;
    }
    if(n==s){
        cout<<"Armstrong"<<"\n";
    }
    else{
        cout<<"Not Armstrong"<<"\n";
    }
    return 0;
}
// Time complexity: O(log10(n))