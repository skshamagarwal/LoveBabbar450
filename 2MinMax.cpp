#include <vector>
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

    ll minimum = INT_MAX;
    ll maximum = INT_MIN;
    for(ll i=0; i<ar.size(); i++){
        if (ar[i]>maximum){
            maximum = ar[i];
        }
        if (ar[i]<minimum){
            minimum = ar[i];
        }
    }
    cout<<"Maximum Element of Array "<<maximum<<endl;
    cout<<"Minimum Element of Array "<<minimum;

    return 0;
}