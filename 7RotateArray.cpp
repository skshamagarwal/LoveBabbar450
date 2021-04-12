#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void rotate(vector<ll> &ar, ll l){
    ll temp = ar[ar.size()-1];
    ar.pop_back();
    ar.insert(ar.begin(), 1, temp);
}

int main(){
    ll l, t;
    cout<<"Enter Length of array:: ";
    cin>>l;
    vector<ll> ar;
    cout<<"Enter array elements space separated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }
    cout<<"How many Times you want to rotate the vector:: ";
    cin>>t;
    for (ll i=0; i<t; i++){
        rotate(ar, l);
    }

    cout<<"Array after "<<t<<" rotations :: ";
    for (int i=0; i<l; i++){
        cout<<ar[i]<<" ";
    }
}