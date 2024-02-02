#include<iostream>
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
        for (int i = 0; i < n; i++) {
            if(i>0 && arr[i] == arr[i+1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k) {
                int sum = arr[k]-(arr[i]+arr[j]);
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    j++;
                    k--;
                    while(j<k && arr[j] == arr[j-1]) j++;
                    while(j<k && arr[k] == arr[k-1]) k--;
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}