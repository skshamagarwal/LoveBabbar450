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
    ar[0]+=k;
    for (ll i=1; i<l; i++){
        if (ar[i]-k>=ar[0]) ar[i]-=k;
        else ar[i]+=k;
    }

    int maximum = *max_element(ar.begin(), ar.end()); 
    int minimum = *min_element(ar.begin(), ar.end()); 
    cout<<maximum-minimum<<endl;
    return 0;
}