#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll l, k;
    cout<<"Enter Length of array and k space separated:: ";
    cin>>l>>k;
    vector<ll> ar;
    cout<<"Enter array elements space separated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }

    sort(ar.begin(), ar.end());
    for (ll i=0; i<l-1; i++){
        if (ar[i]-k<=)
    }

    return 0;
}