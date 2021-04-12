#include <vector>
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    ll l;
    cout<<"Enter Length of array:: ";
    cin>>l;
    vector<ll> ar;
    cout<<"Enter array elements space separated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }

    ll idx = 0;
    for (ll i=0; i<l; i++){
        if (ar[i]<0){
            ll temp = ar[i];
            ar.erase(ar.begin()+i);
            ar.insert(ar.begin()+idx, temp);
            idx++;
        }
    }

    cout<<"One Sided Negative Array:: ";
    for (ll i=0; i<l; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}