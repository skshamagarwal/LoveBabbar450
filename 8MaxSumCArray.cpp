#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll l;
    cout<<"Enter Length of array:: ";
    cin>>l;
    vector<ll> ar;
    cout<<"Enter array elements space seperated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }
    ll maxSum = INT_MIN;
    for(ll i=0; i<l; i++){
        for(ll j=i; j<l; j++){
            ll sum=0;
            if (i==j) sum=ar[i];
            else sum=accumulate(ar.begin()+i, ar.begin()+j, sum);            
            cout<<sum<<endl;
            if (sum>maxSum){
                maxSum=sum;
            }
        }        
    }
    cout<<"Maximum Continuous Subarray Sum:: "<<maxSum;

    return 0;
}