#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int j = i-1;
        while(j>=0 && )
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sort"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    InsertionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
}