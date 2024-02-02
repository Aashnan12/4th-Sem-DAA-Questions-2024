#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int k;
        cin>>k;
        set<pair<int,int>> ans;
        sort(arr,arr+n);
        int i=0;
        int j=1;
        while(i<n && j<n){
            int diff = abs(arr[i]-arr[j]);
            if(diff == k && i!=j){
                ans.insert({arr[i],arr[j]});
                i++;
                j++;
            }
            else if(diff > k){
                i++;
            }
            else {
                j++;
            }
        }
        cout<<ans.size()<<endl;
    }
    
    return 0;
}