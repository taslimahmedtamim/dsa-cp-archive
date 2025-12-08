//GCD - > greatest common divisor

/*
Video Explanation: https://youtu.be/utZcJ0leZ_g?si=JJ9zL6yhrbQlLqtr
*/

#include<bits/stdc++.h>
using namespace std;

int gcdBruteForce(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i<=min(n1, n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}
// Time complexity : O(min(n1,n2))


int gcdBetter(int n1, int n2){
    int gcd;
    for(int i = min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){
            gcd = i;
            break;
        }
    }
    return gcd;
}
// Time complexity : O(min(n1, n2))


int gcdBest_EuclideanAlgorithm(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1==0){
        return n2;
    }
    else{
        return n1;
    }
}
// Time complexity : O(log∅ min(n1,n2))


int gcdBest_EuclideanAlgorithm_Recursive(int n1, int n2){
    if(n2==0) {
        return n1;
    }
    int rem = n1%n2;
    return gcdBest_EuclideanAlgorithm_Recursive(n2, rem);
}
// Time complexity : O(log∅ min(n1,n2))



int main(){
    int n1,n2;
    cin>>n1>>n2;
    // int gcd = gcdBruteForce(n1,n2);
    // int gcd = gcdBetter(n1, n2);
    // int gcd = gcdBest_EuclideanAlgorithm(n1, n2);
    int gcd = gcdBest_EuclideanAlgorithm_Recursive(n1, n2);
    // int gcd = __gcd(n1,n2); // Time complexity : O(logn)
    int lcm = (n1*n2)/gcd;
    cout<<gcd<<endl;
    cout<<lcm<<endl;
    return 0;
}


