#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll l, count=0;
    cout<<"Enter Length of array:: ";
    cin>>l;
    cout<<"Enter array elements space separated:: ";
    vector<ll> ar;
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip);
    }
    ll idx=0;
    while (idx<ar.size()){
        idx+=ar[idx];
        count++;
    }
    cout<<count<<endl;
    return 0;
}