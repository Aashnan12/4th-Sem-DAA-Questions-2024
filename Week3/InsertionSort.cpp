#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int n = 7;
    vector<int> arr = {4,3,5,1,2,3,4};
    cout<<"Before Sort"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    InsertionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
}