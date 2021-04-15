#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array:: ";
    cin>>n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin>>ar[i];
    }   
    int maxSum = INT_MIN, curSum = 0;

    for (int i=0; i<n; i++){
        curSum+=ar[i];
        if (curSum>maxSum) {
            maxSum=curSum;
        }
        if (curSum<0) {
            curSum = 0;
        }
    }
    cout<<maxSum<<endl;
}