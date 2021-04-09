#include <vector>
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    ll l, k;
    cout<<"Enter Length of array:: ";
    cin>>l;
    vector<ll> ar;
    cout<<"Enter array elements space seperated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }
    cout<<"K:: ";
    cin>>k;

    sort(ar.begin(), ar.end());
    cout<<"Min kth element of array:: "<<ar[k-1]<<endl;
    cout<<"Max kth element of array:: "<<ar[ar.size()-k];

    return 0;
}