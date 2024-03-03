#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool Search(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i-1] == arr[i]){
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        if(Search(arr,n)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}