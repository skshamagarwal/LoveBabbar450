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

    for(ll i=0; i<l; i++){
        for (ll j=i; j<l; j++){
            if (ar[i]>ar[j]){
                ll temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    cout<<"Sorted Array:: ";
    for (ll i=0; i<l; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}