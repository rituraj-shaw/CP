#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    n%=4;
    if(n==0||n==3) cout<<0;
    else cout<<1;
    return 0;
}
// You are given an integer sequence 1,2,…,n. You have to divide it into two sets A and B in such a way that each element belongs to exactly one set and |sum(A)−sum(B)| is minimum possible.

// The value |x| is the absolute value of x and sum(S) is the sum of elements of the set S.

// Input
// The first line of the input contains one integer n (1≤n≤2⋅109).

// Output
// Print one integer — the minimum possible value of |sum(A)−sum(B)| if you divide the initial sequence 1,2,…,n into two sets A and B.

// Examples
// inputCopy
// 3
// outputCopy
// 0
// inputCopy
// 5
// outputCopy
// 1
// inputCopy
// 6
// outputCopy
// 1
// Note
// Some (not all) possible answers to examples:

// In the first example you can divide the initial sequence into sets A={1,2} and B={3} so the answer is 0.

// In the second example you can divide the initial sequence into sets A={1,3,4} and B={2,5} so the answer is 1.

// In the third example you can divide the initial sequence into sets A={1,4,5} and B={2,3,6} so the answer is 1.

