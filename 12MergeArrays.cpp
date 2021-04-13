#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter Length of array 1 and array 2 space separated:: ";
    cin>>n>>m;
    int ar1[n], ar2[m];
    int temp[n+m];
    cout<<"Enter array elements space separated:: ";
    for (int i=0; i<(n+m); i++){
        int ip;
        cin>>ip;
        temp[i] = ip;
    }
    sort(temp, temp+n+m);
    int j=0;
    for (int i=0;i<(n+m); i++){
        if (i<n){
            ar1[i] = temp[i];
        }
        else{
            ar2[j] = temp[i];
            j++;
        }
    }
    cout<<"Array 1 -> ";
    for (int i=0; i<n; i++){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 -> ";
    for (int i=0; i<m; i++){
        cout<<ar2[i]<<" ";
    }
    
}