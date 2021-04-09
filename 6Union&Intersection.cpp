#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
 
int main(){
    ll l, l2;
    cout<<"Enter Length of first and second array space separated:: ";
    cin>>l>>l2;
    vector<ll> ar, ar2;
    cout<<"Enter array elements space seperated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }

    cout<<"Enter second array elements space seperated:: ";
    for (ll i=0; i<l2; i++){
        ll ip;
        cin>>ip;
        ar2.push_back(ip); 
    }
 
    ll count_i = 0;
    ll count_u = l;
    for (ll i=0; i<l; i++){
        auto f = ar2.find(ar.begin(), ar.end(), ar[i]);
        if (f!=ar.end()){
            count_i++;
        }
        else{
            count_u++;
        }
    }

    cout<<"Intersection Count:: "<<count_i<<endl;
    cout<<"Union Count:: "<<count_u<<endl;
 
    return 0;
}