#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll l;
    cout<<"Enter Length of array:: ";
    cin>>l;
    cout<<"Enter array elements space separated:: ";
    vector<ll> ar;
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip);
    }
    vector<ll>::iterator it;
    for (ll i=0; i<l; i++){
        it = find(ar.begin()+i+1, ar.end(), ar[i]);
        if (it!=ar.end()){
            cout<<ar[i];
            break;
        }
    }
    return 0;
}