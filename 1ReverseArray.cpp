#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;

int main(){
    ll l;
    cout<<"Enter Length of array:: ";
    cin>>l;
    vector<ll> ar, reversed_ar;
    cout<<"Enter array elements space separated:: ";
    for (ll i=0; i<l; i++){
        ll ip;
        cin>>ip;
        ar.push_back(ip); 
    }

    for (ll i=l-1; i>=0; i--){
      reversed_ar.push_back(ar[i]);
    }

    // Print new arr
    cout<<"Reversed Array:: ";
    for (ll i=0; i<l; i++){
      cout<<reversed_ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}